#ifndef P01_CASAMARCAT_HPP
#define P01_CASAMARCAT_HPP


#include <vector>
#include <memory>
#include "Client.hpp"

class CasaMarcat {
private:
    unsigned int numarCasaMarcat{};
    std::vector<std::shared_ptr<Client>> clienti;

public:
    CasaMarcat() = default;
    ~CasaMarcat() = default;
    CasaMarcat(const CasaMarcat&) = default;
    CasaMarcat& operator=(const CasaMarcat&) = default;

    // Constructor
    explicit CasaMarcat(unsigned int numarCasaMarcat);

    // Read & Print
    void read(std::istream& in);
    void print(std::ostream& out) const;

    friend std::istream& operator>>(std::istream& in, CasaMarcat& casaMarcat);
    friend std::ostream& operator<<(std::ostream& out, const CasaMarcat& casaMarcat);
};


#endif //P01_CASAMARCAT_HPP
