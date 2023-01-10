#include <iostream>
#include "../headers/Raft.hpp"

Raft::Raft(const Produs &produs, double cantitate) : produs(produs), cantitate(cantitate) {}

std::istream &operator>>(std::istream &in, Raft &raft) {
    return in;
}

std::ostream &operator<<(std::ostream &out, const Raft &raft) {
    return out;
}

void Raft::read(std::istream& in) {
    std::cout << "----DETALII PRODUS----\n";
    produs.read(in);

    std::cout << "Cantintate: ";
    in >> cantitate;
}

void Raft::print(std::ostream& out) const{
    out << "---DETALII PRODUS----\n";
    produs.print(out);

    out << "Cantitate: " << cantitate << "\n";
}

const Produs &Raft::getProdus() const {
    return produs;
}

void Raft::setProdus(const Produs &produs) {
    Raft::produs = produs;
}

double Raft::getCantitate() const {
    return cantitate;
}

void Raft::setCantitate(double cantitate) {
    Raft::cantitate = cantitate;
}
