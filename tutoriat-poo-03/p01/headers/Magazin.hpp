#ifndef P01_MAGAZIN_HPP
#define P01_MAGAZIN_HPP


#include <vector>
#include <memory>
#include "Raft.hpp"
#include "CasaMarcat.hpp"
#include "Client.hpp"

class Magazin {
private:
    unsigned int idMagazin{};
    std::vector<std::shared_ptr<Raft>> rafturi;
    std::vector<std::shared_ptr<CasaMarcat>> caseMarcat;
    std::vector<std::shared_ptr<Client>> clienti; // echivalent cu `std::vector<Client*> clienti;`

public:
    Magazin() = default;
    ~Magazin() = default;
    Magazin(const Magazin&) = default;
    Magazin& operator=(const Magazin&) = default;

    // Constructor
    explicit Magazin(unsigned int idMagazin);

    // Read & Print
    friend std::istream& operator>>(std::istream& in, Magazin& magazin);
    friend std::ostream& operator<<(std::ostream& out, const Magazin& magazin);

    void read(std::istream& in);
    void print(std::ostream& out) const;

    // Meniu Gestionare
    static void afisareMeniuMagazin();
    void actiuniGestionareMagazin();

    // Operatii Gestionare
    void adaugareRafturi();
    void adaugareCaseMarcat();
    void adaugareClient();

    // Getters & Setters
    unsigned int getIdMagazin() const;

    void setIdMagazin(unsigned int idMagazin);

    const std::vector<std::shared_ptr<Raft>> &getRafturi() const;

    void setRafturi(const std::vector<std::shared_ptr<Raft>> &rafturi);

    const std::vector<std::shared_ptr<CasaMarcat>> &getCaseMarcat() const;

    void setCaseMarcat(const std::vector<std::shared_ptr<CasaMarcat>> &caseMarcat);

    const std::vector<std::shared_ptr<Client>> &getClienti() const;

    void setClienti(const std::vector<std::shared_ptr<Client>> &clienti);
};


#endif //P01_MAGAZIN_HPP
