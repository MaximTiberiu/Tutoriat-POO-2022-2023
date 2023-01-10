#ifndef P01_CLIENT_HPP
#define P01_CLIENT_HPP


#include <string>
#include "CosCumparaturi.hpp"

class Client {
protected:
    std::string numeClient;
    std::string idClient;
    double sumaTotalaClient{};
    CosCumparaturi cosCumparaturi;

    unsigned int dd{1};
    unsigned int mm{1};
    unsigned int yyyy{1900};

public:
    Client() = default;
    virtual ~Client() = default;
    Client(const Client&) = default;
    Client& operator=(const Client&) = default;

    // Constructor
    Client(const std::string &numeClient, const std::string &idClient, double sumaTotalaClient);

    // Read & Print
    virtual void read(std::istream& in);
    virtual void print(std::ostream& out);

    friend std::istream& operator>>(std::istream& in, Client& client);
    friend std::ostream& operator<<(std::ostream& out, const Client& client);

    // Getters & Setters
    const std::string &getNumeClient() const;

    void setNumeClient(const std::string &numeClient);

    const std::string &getIdClient() const;

    void setIdClient(const std::string &idClient);

    double getSumaTotalaClient() const;

    void setSumaTotalaClient(double sumaTotalaClient);

    const CosCumparaturi &getCosCumparaturi() const;

    void setCosCumparaturi(const CosCumparaturi &cosCumparaturi);
};


#endif //P01_CLIENT_HPP
