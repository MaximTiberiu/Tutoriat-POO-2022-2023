//
// Created by Tiberiu on 11/23/2022.
//

#include "../headers/Exceptions.hpp"

const char *InvalidOptionException::what() const noexcept {
    return "Optiune invalida!\n";
}
