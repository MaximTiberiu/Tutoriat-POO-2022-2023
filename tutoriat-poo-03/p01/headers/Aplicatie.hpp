#ifndef P01_APLICATIE_HPP
#define P01_APLICATIE_HPP


#include <vector>
#include <memory>
#include "Magazin.hpp"

class Aplicatie {
private:
    // singleton stuff
    static Aplicatie* aplicatie;
    Aplicatie() = default;

    // data
    std::vector<std::shared_ptr<Magazin>> magazine;

public:
    // singleton stuff
    ~Aplicatie() = default;
    static Aplicatie* getAplicatie();

    // Read & Print
    static void printMeniu();

    void adaugareMagazine();
    void printMagazine();
    void printListaMagazine();

    // Getter & Setter
    const std::vector<std::shared_ptr<Magazin>> &getMagazine() const;

    void setMagazine(const std::vector<std::shared_ptr<Magazin>> &magazine);

    // Start Aplicatie
    static void startAplicatie();
};


#endif //P01_APLICATIE_HPP
