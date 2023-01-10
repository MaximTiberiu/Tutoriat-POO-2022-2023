#include <iostream>
#include "../headers/CasaMarcat.hpp"

CasaMarcat::CasaMarcat(unsigned int numarCasaMarcat) : numarCasaMarcat(numarCasaMarcat) {}

void CasaMarcat::read(std::istream &in) {
    std::cout << "Numar casa de marcat: ";
    in >> numarCasaMarcat;
}

void CasaMarcat::print(std::ostream &out) const {
    out << "Casa de marcat #" << numarCasaMarcat << "\n";
    out << "Clienti:\n";
    for (auto& client : clienti) {
        // TODO
    }
}

std::istream &operator>>(std::istream &in, CasaMarcat &casaMarcat) {
    casaMarcat.read(in);
    return in;
}

std::ostream &operator<<(std::ostream &out, const CasaMarcat &casaMarcat) {
    casaMarcat.print(out);
    return out;
}
