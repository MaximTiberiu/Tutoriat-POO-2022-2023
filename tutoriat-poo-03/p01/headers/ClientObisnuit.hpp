#ifndef P01_CLIENTOBISNUIT_HPP
#define P01_CLIENTOBISNUIT_HPP


#include "Client.hpp"

class ClientObisnuit : public Client{
private:

public:
    ClientObisnuit() = default;
    ~ClientObisnuit() override = default;
    ClientObisnuit(const ClientObisnuit&) = default;
    ClientObisnuit& operator=(const ClientObisnuit&) = default;

    void read(std::istream& in) override;
    void print(std::ostream &out) override;
};


#endif //P01_CLIENTOBISNUIT_HPP
