#include <iostream>
#include "../headers/Client.hpp"

Client::Client(const std::string &numeClient, const std::string &idClient, double sumaTotalaClient) : numeClient(
        numeClient), idClient(idClient), sumaTotalaClient(sumaTotalaClient) {}

void Client::read(std::istream &in) {
    std::cout << "Nume Client: ";
    in >> numeClient;

    std::cout << "----DATA NASTERII----\n";
    std::cout << "Zi: ";
    in >> dd;
    std::cout<< "Luna: ";
    in >> mm;
    std::cout << "An: ";
    in >> yyyy;

    std::cout << "Suma Totala Client: ";
    in >> sumaTotalaClient;
}

void Client::print(std::ostream &out) {
    out << "Nume Client: " << numeClient << "\n";
    out << "ID Client: " << idClient << "\n";
    out << "Suma Totala Client: " << sumaTotalaClient << "\n";
    out << "Cos Cumparaturi:\n";
//    cosCumparaturi.print(out);
}

std::istream &operator>>(std::istream &in, Client &client) {
    return in;
}

std::ostream &operator<<(std::ostream &out, const Client &client) {
    return out;
}

const std::string &Client::getNumeClient() const {
    return numeClient;
}

void Client::setNumeClient(const std::string &numeClient) {
    Client::numeClient = numeClient;
}

const std::string &Client::getIdClient() const {
    return idClient;
}

void Client::setIdClient(const std::string &idClient) {
    Client::idClient = idClient;
}

double Client::getSumaTotalaClient() const {
    return sumaTotalaClient;
}

void Client::setSumaTotalaClient(double sumaTotalaClient) {
    Client::sumaTotalaClient = sumaTotalaClient;
}

const CosCumparaturi &Client::getCosCumparaturi() const {
    return cosCumparaturi;
}

void Client::setCosCumparaturi(const CosCumparaturi &cosCumparaturi) {
    Client::cosCumparaturi = cosCumparaturi;
}
