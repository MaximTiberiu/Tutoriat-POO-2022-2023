#include <iostream>
#include "../headers/Produs.hpp"

Produs::Produs(const std::string &numeProdus, double pretProdus) : numeProdus(numeProdus), pretProdus(pretProdus) {}

void Produs::read(std::istream &in) {
    std::cout << "Nume Produs: ";
    in >> numeProdus;

    std::cout << "Pret Produs: ";
    in >> pretProdus;
}

void Produs::print(std::ostream &out) const {
    out << "Nume Produs: " << numeProdus << "\n";
    out << "Pret Produs: " << pretProdus << "\n";
}

std::istream &operator>>(std::istream &in, Produs &produs) {
    produs.read(in);
    return in;
}

std::ostream &operator<<(std::ostream &out, const Produs &produs) {
    produs.print(out);
    return out;
}
