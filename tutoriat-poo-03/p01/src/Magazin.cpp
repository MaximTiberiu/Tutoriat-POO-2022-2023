#include <iostream>
#include "../headers/Exceptions.hpp"
#include "../headers/Magazin.hpp"
#include "../headers/ClientObisnuit.hpp"
#include "../headers/ClientFidel.hpp"
#include "../headers/ClientSpecial.hpp"

Magazin::Magazin(unsigned int idMagazin) {
    this->idMagazin = idMagazin;
}

unsigned int Magazin::getIdMagazin() const {
    return idMagazin;
}

void Magazin::setIdMagazin(unsigned int idMagazin) {
    Magazin::idMagazin = idMagazin;
}

const std::vector<std::shared_ptr<Raft>> &Magazin::getRafturi() const {
    return rafturi;
}

void Magazin::setRafturi(const std::vector<std::shared_ptr<Raft>> &rafturi) {
    Magazin::rafturi = rafturi;
}

const std::vector<std::shared_ptr<CasaMarcat>> &Magazin::getCaseMarcat() const {
    return caseMarcat;
}

void Magazin::setCaseMarcat(const std::vector<std::shared_ptr<CasaMarcat>> &caseMarcat) {
    Magazin::caseMarcat = caseMarcat;
}

const std::vector<std::shared_ptr<Client>> &Magazin::getClienti() const {
    return clienti;
}

void Magazin::setClienti(const std::vector<std::shared_ptr<Client>> &clienti) {
    Magazin::clienti = clienti;
}

void Magazin::read(std::istream &in) {
    std::cout << "ID Magazin: ";
    in >> idMagazin;
}

void Magazin::print(std::ostream &out) const {
    out << "ID Magazin: " << idMagazin << "\n";

    out << "Rafturi:\n";
    for (auto& raft : rafturi) {
        raft->print(out);
    }

    out << "Case de Marcat:\n";
    for (auto& casaMarcat : caseMarcat) {
        casaMarcat->print(out);
    }

    out << "Clienti:\n";
    for (auto& client : clienti) {
        client->print(out);
    }
}

std::istream &operator>>(std::istream &in, Magazin &magazin) {
    magazin.read(in);
    return in;
}

std::ostream &operator<<(std::ostream &out, const Magazin &magazin) {
    magazin.print(out);
    return out;
}

void Magazin::afisareMeniuMagazin() {
    std::cout << "-------------------------------\n";
    std::cout << "\tMENIU MAGAZIN- ALEGETI O OPTIUNE:\n";
    std::cout << "1. Adaugare Rafturi\n";
    std::cout << "2. Adaugare Case de Marcat\n";
    std::cout << "3. Adaugare Clienti\n";
    std::cout << "4. Afisare Date Magazin\n";
    std::cout << "0. Iesire\n";
    std::cout << "-------------------------------\n";
}

void Magazin::actiuniGestionareMagazin() {
    unsigned int optiune = 0;

    do {
        Magazin::afisareMeniuMagazin();
        std::cout << "Introduceti numarul optiunii: ";
        std::cin >> optiune;

        switch(optiune) {
            case 1: {
                adaugareRafturi();
                break;
            }
            case 2: {
                adaugareCaseMarcat();
                break;
            }
            case 3: {
                adaugareClient();
                break;
            }
            case 4: {
                print(std::cout);
                break;
            }
            case 0: {
                std::cout << "Iesire din gestiunea magazinului...\n";
                break;
            }
            default: {
                std::cout << "Nu exista aceasta optiune!\n";
            }
        }
    } while (optiune != 0);
}

void Magazin::adaugareRafturi() {
    unsigned int numarRafturi;
    std::cout << "Numar de rafturi: ";
    std::cin >> numarRafturi;

    for (unsigned int i = 0 ; i < numarRafturi ; i++) {
        std::shared_ptr<Raft> tempRaft = std::make_shared<Raft>();
        tempRaft->read(std::cin);
        rafturi.emplace_back(tempRaft);
    }
}

void Magazin::adaugareCaseMarcat() {
    unsigned int numarCaseMarcat;
    std::cout << "Numar case de marcat: ";
    std::cin >> numarCaseMarcat;

    for (unsigned int i = 0 ; i < numarCaseMarcat ; i++) {
        std::shared_ptr<CasaMarcat> tempCasaMarcat = std::make_shared<CasaMarcat>();
        tempCasaMarcat->read(std::cin);
        caseMarcat.emplace_back(tempCasaMarcat);
    }
}

void Magazin::adaugareClient() {
    unsigned int numarClienti;
    std::cout << "Numar clienti: ";
    std::cin >> numarClienti;

    for (unsigned int i = 0 ; i < numarClienti ; i++) {
        std::shared_ptr<Client> tempClient;
        unsigned int optiuneClient, citireValida = 0;
        while (!citireValida) {
            std::cout << "Tip de client (1 - Obisnuit; 2 - Fidel; 3 - Special): ";
            std::cin >> optiuneClient;
            citireValida = 1;

            try {
                switch (optiuneClient) {
                    case 1: {
                        tempClient = std::make_shared<ClientObisnuit>();
                        break;
                    }

                    case 2: {
                        tempClient = std::make_shared<ClientFidel>();
                        break;
                    }

                    case 3: {
                        tempClient = std::make_shared<ClientSpecial>();
                        break;
                    }
                    default: {
                        throw InvalidOptionException();
                    }
                }
                tempClient->read(std::cin);
                clienti.emplace_back(tempClient);
            } catch (InvalidOptionException &invalidOptionException) {
                std::cout << invalidOptionException.what();
                citireValida = 0;
            }
        }
    }
}
