#ifndef P01_PRODUS_HPP
#define P01_PRODUS_HPP

#include <string>

class Produs {
private:
    std::string numeProdus;
    double pretProdus{};

public:
    Produs() = default;
    ~Produs() = default;
    Produs(const Produs&) = default;
    Produs& operator=(const Produs&) = default;

    // Constructor
    Produs(const std::string &numeProdus, double pretProdus);

    // Read & Print
    friend std::istream& operator>>(std::istream& in, Produs& produs);
    friend std::ostream& operator<<(std::ostream& out, const Produs& produs);

    void read(std::istream& in);
    void print(std::ostream& out) const;

    // Getters & Setters

};


#endif //P01_PRODUS_HPP
