#include <iostream>
#include "../headers/Aplicatie.hpp"

Aplicatie* Aplicatie::aplicatie = nullptr;

Aplicatie *Aplicatie::getAplicatie() {
    if (aplicatie == nullptr) {
        aplicatie = new Aplicatie();
    }
    return aplicatie;
}

void Aplicatie::printMeniu() {
    std::cout << "-------------------------------\n";
    std::cout << "\tMENIU - ALEGETI O OPTIUNE:\n";
    std::cout << "1. Adaugare Magazine\n";
    std::cout << "2. Afisare Magazine\n";
    std::cout << "3. Gestionare Magazin\n";
    std::cout << "0. Iesire\n";
    std::cout << "-------------------------------\n";
}

void Aplicatie::adaugareMagazine() {
    unsigned int numarMagazine;
    std::cout << "Numar de magazine: ";
    std::cin >> numarMagazine;

    for (unsigned int i = 0 ; i < numarMagazine ; i++) {
        std::shared_ptr<Magazin> tempMagazin = std::make_shared<Magazin>();
        tempMagazin->read(std::cin);
        magazine.push_back(tempMagazin);
    }
}

void Aplicatie::printMagazine() {
    for (auto& magazin : magazine) {
        magazin->print(std::cout);
    }
}

void Aplicatie::printListaMagazine() {
    for (unsigned int i = 0 ; i < magazine.size() ; i++) {
        std::cout << i << ". " << magazine[i]->getIdMagazin() << "\n";
    }
}

const std::vector<std::shared_ptr<Magazin>> &Aplicatie::getMagazine() const {
    return magazine;
}

void Aplicatie::setMagazine(const std::vector<std::shared_ptr<Magazin>> &magazine) {
    Aplicatie::magazine = magazine;
}

void Aplicatie::startAplicatie() {
    unsigned int optiune = 0;
    Aplicatie* app = Aplicatie::getAplicatie();

    do {
        Aplicatie::printMeniu();
        std::cout << "Introduceti numarul optiunii: ";
        std::cin >> optiune;

        switch(optiune) {
            case 1: {
                app->adaugareMagazine();
                break;
            }
            case 2: {
                app->printMagazine();
                break;
            }
            case 3: {
                app->printListaMagazine();
                unsigned int numarMagazin;
                std::cout << "Selectare magazin: ";
                std::cin >> numarMagazin;
                app->getMagazine()[numarMagazin]->actiuniGestionareMagazin();
                break;
            }
            case 0: {
                std::cout << "Iesire din aplicatie...\n";
                break;
            }
            default: {
                std::cout << "Nu exista aceasta optiune!\n";
            }
        }
    } while (optiune != 0);
}
