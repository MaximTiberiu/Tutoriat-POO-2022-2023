#ifndef P01_RAFT_HPP
#define P01_RAFT_HPP


#include "Produs.hpp"

class Raft {
private:
    Produs produs;
    double cantitate{};

public:
    Raft() = default;
    ~Raft() = default;
    Raft(const Raft& raft) = default;
    Raft& operator=(const Raft& raft) = default;

    // Constructor
    Raft(const Produs &produs, double cantitate);

    // Read & Print
    friend std::istream& operator>>(std::istream& in, Raft& raft);
    friend std::ostream& operator<<(std::ostream& out, const Raft& raft);

    void read(std::istream& in);
    void print(std::ostream& out) const;

    // Setters & Getters
    const Produs &getProdus() const;

    void setProdus(const Produs &produs);

    double getCantitate() const;

    void setCantitate(double cantitate);
};


#endif //P01_RAFT_HPP
