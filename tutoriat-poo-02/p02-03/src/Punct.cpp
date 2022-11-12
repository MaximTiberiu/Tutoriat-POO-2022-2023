//
// Created by Tiberiu on 11/9/2022.
//

#include "../headers/Punct.hpp"

int Punct::getX() const {
    return x;
}

void Punct::setX(int x) {
    Punct::x = x;
}

int Punct::getY() const {
    return y;
}

void Punct::setY(int y) {
    Punct::y = y;
}

Punct::Punct(int x, int y) {
    this->x = x;
    this->y = y;
}
