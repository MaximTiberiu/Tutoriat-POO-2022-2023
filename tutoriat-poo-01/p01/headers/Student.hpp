//
// Created by Tiberiu on 11/2/2022.
//

#ifndef P01_STUDENT_HPP
#define P01_STUDENT_HPP

#include <iostream>

class Student {
private:
    unsigned int id;
    std::string nume;
    unsigned int grupa;

public:
    Student() = default;
    ~Student() = default;

    Student(unsigned int id, const std::string &nume, unsigned int grupa);
    void citire ();
    void afisare ();

    unsigned int getId() const;

    void setId(unsigned int id);

    const std::string &getNume() const;

    void setNume(const std::string &nume);

    unsigned int getGrupa() const;

    void setGrupa(unsigned int grupa);
};

#endif //P01_STUDENT_HPP
