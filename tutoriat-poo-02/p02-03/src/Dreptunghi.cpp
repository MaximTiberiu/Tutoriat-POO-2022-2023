//
// Created by Tiberiu on 11/9/2022.
//

#include <valarray>
#include "../headers/Dreptunghi.hpp"

Dreptunghi::Dreptunghi(int x_p1, int y_p1, int x_p2, int y_p2) {
    this->p1.setX(x_p1);
    this->p1.setY(y_p1);

    this->p2.setX(x_p2);
    this->p2.setY(y_p2);
}

Dreptunghi::Dreptunghi(Punct p1, Punct p2) {
    this->p1 = p1;
    this->p2 = p2;
}

const Punct &Dreptunghi::getP1() const {
    return p1;
}

void Dreptunghi::setP1(const Punct &p1) {
    Dreptunghi::p1 = p1;
}

const Punct &Dreptunghi::getP2() const {
    return p2;
}

void Dreptunghi::setP2(const Punct &p2) {
    Dreptunghi::p2 = p2;
}

double arie (const Dreptunghi &dreptunghi) {
    /*
     * (x_p1, y_p2)                (x_p2, y_p2)
     *
     * (x_p1, y_p1)                (x_p2, y_p1)
     */

    int x_p1 = dreptunghi.p1.getX();
    int y_p1 = dreptunghi.p1.getY();

    int x_p2 = dreptunghi.p2.getX();
    int y_p2 = dreptunghi.p2.getY();

    double L = std::sqrt(std::pow(x_p2 - x_p1, 2));
    double l = std::sqrt(std::pow(y_p2 - y_p1, 2));

    return L * l;
}

