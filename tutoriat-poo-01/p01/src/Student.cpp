//
// Created by Tiberiu on 11/2/2022.
//

#include "../headers/Student.hpp"

unsigned int Student::getId() const {
    return id;
}

void Student::setId(unsigned int id) {
    Student::id = id;
}

const std::__cxx11::basic_string<char> &Student::getNume() const {
    return nume;
}

void Student::setNume(const std::__cxx11::basic_string<char> &nume) {
    Student::nume = nume;
}

unsigned int Student::getGrupa() const {
    return grupa;
}

void Student::setGrupa(unsigned int grupa) {
    Student::grupa = grupa;
}

void Student::citire() {
    std::cin >> id >> grupa >> nume;
}

void Student::afisare() {
    std::cout << id << " " << grupa << " " << nume << "\n";
}

Student::Student(unsigned int id, const std::string &nume, unsigned int grupa) : id(id), nume(nume), grupa(grupa) {}
