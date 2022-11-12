//
// Created by Tiberiu on 11/9/2022.
//

#ifndef P02_03_DREPTUNGHI_HPP
#define P02_03_DREPTUNGHI_HPP

#include "Punct.hpp"
#include <iostream>

class Dreptunghi {
private:
    Punct p1;
    Punct p2;

public:
    Dreptunghi() = default;
    ~Dreptunghi() = default;

    Dreptunghi(int x_p1, int y_p1, int x_p2, int y_p2);
    Dreptunghi(Punct p1, Punct p2);

    const Punct &getP1() const;

    void setP1(const Punct &p1);

    const Punct &getP2() const;

    void setP2(const Punct &p2);

    friend double arie (const Dreptunghi &dreptunghi);

};

#endif //P02_03_DREPTUNGHI_HPP
