#include <iostream>
#include <vector>
#include <algorithm>

// Implementarea clasei Participare – la fiecare curs participa maxim 100 studenti din diferite grupe:
// citire, afișare, sortare după grupă și în fiecare grupă, alfabetic.

class Participare {
private:
    unsigned int grupa;
    std::string numeStudent;

public:
    Participare() {
        std::cout << "Constructor => " << grupa << " " << numeStudent << "\n";
    }
    ~Participare() {
        std::cout << "Destructor => " << grupa << " " << numeStudent << "\n";
    }

    Participare(unsigned int grupa, const std::string &numeStudent) : grupa(grupa), numeStudent(numeStudent) {
        std::cout << "Constructor => " << grupa << " " << numeStudent << "\n";
    }

    Participare (const Participare &participare) {
        this->grupa = participare.grupa;
        this->numeStudent = participare.numeStudent;
        std::cout << "Constructor de copiere => " << grupa << " " << numeStudent << "\n";
    }
    unsigned int getGrupa() const {
        return grupa;
    }

    void setGrupa(unsigned int grupa) {
        Participare::grupa = grupa;
    }

    const std::string &getNumeStudent() const {
        return numeStudent;
    }

    void setNumeStudent(const std::string &numeStudent) {
        Participare::numeStudent = numeStudent;
    }
};

// 1. grupa
// 2. alfabetic
bool comparator(const Participare &a, const Participare &b) {
    if (a.getGrupa() == b.getGrupa()) {
        return a.getNumeStudent() < b.getNumeStudent();
    }
    return a.getGrupa() < b.getGrupa();
}

int main() {
    std::vector<Participare> participantCurs;

    // push_back
//    //    participantCurs.reserve(100);
//    std::cout << "******************\n";
//    participantCurs.push_back(Participare(261, "A"));
//
//    std::cout << "******************\n";
//    participantCurs.push_back(Participare(262, "B"));
//
//    std::cout << "******************\n";
//    participantCurs.push_back(Participare(263, "C"));
//
//    std::cout << "******************\n";
//    participantCurs.push_back(Participare(264, "D"));
//
//    std::cout << "******************\n";


    // push_back cu reserve
//    participantCurs.reserve(100);
//    std::cout << "******************\n";
//    participantCurs.push_back(Participare(261, "A"));
//
//    std::cout << "******************\n";
//    participantCurs.push_back(Participare(262, "B"));
//
//    std::cout << "******************\n";
//    participantCurs.push_back(Participare(263, "C"));
//
//    std::cout << "******************\n";
//    participantCurs.push_back(Participare(264, "D"));
//
//    std::cout << "******************\n";


    // emplace_back
    //    participantCurs.reserve(100);
//    std::cout << "******************\n";
//    participantCurs.emplace_back(Participare(261, "A"));
//
//    std::cout << "******************\n";
//    participantCurs.emplace_back(Participare(262, "B"));
//
//    std::cout << "******************\n";
//    participantCurs.emplace_back(Participare(263, "C"));
//
//    std::cout << "******************\n";
//    participantCurs.emplace_back(Participare(264, "D"));
//
//    std::cout << "******************\n";

    // emplace_back cu reserve
    participantCurs.reserve(100);
    std::cout << "******************\n";
    participantCurs.emplace_back(263, "C");
    participantCurs.emplace_back(263, "A");

    std::cout << "******************\n";
    participantCurs.emplace_back(262, "B");

    std::cout << "******************\n";
    participantCurs.emplace_back(261, "C");

    std::cout << "******************\n";
    participantCurs.emplace_back(264, "D");

    std::cout << "******************\n";

    // sort cu comparator()
//    std::sort(participantCurs.begin(), participantCurs.end(), &comparator);
//    std::cout << "*****AFISARE*****\n";
//    for (auto & it : participantCurs) {
//        std::cout << it.getGrupa() << " " << it.getNumeStudent() << "\n";
//    }
//    std::cout << "*****AFISARE*****\n";

    // sort cu lambda function
    std::sort(participantCurs.begin(), participantCurs.end(), [](const Participare &a, const Participare &b) {
        if (a.getGrupa() == b.getGrupa()) {
            return a.getNumeStudent() < b.getNumeStudent();
        }
        return a.getGrupa() < b.getGrupa();
    });
    std::cout << "*****AFISARE*****\n";
    for (auto it = participantCurs.begin() ; it != participantCurs.end() ; it++) {
        std::cout << it->getGrupa() << " " << it->getNumeStudent() << "\n";
    }
    std::cout << "*****AFISARE*****\n";

    return 0;
}
