//
// Created by Tiberiu on 11/15/2022.
//

#include <ctime>
#include "../headers/ClientObisnuit.hpp"

void ClientObisnuit::read(std::istream &in) {
    Client::read(in);
    srand(time(0));
    int randomNumber = rand() % 9000 + 1000;
    idClient = "O" + std::to_string(dd) + std::to_string(mm) + std::to_string(int(2000 - yyyy)) + std::to_string(randomNumber);
}

void ClientObisnuit::print(std::ostream &out) {
    Client::print(out);
}


