#include <iostream>
#include <vector>

using namespace std;

// Implementarea clasei Curs - nr. ore, titular și grupa și sa citească datele a n cursuri și să se afișeze.

class Curs {
private:
    unsigned int nrOre;
    std::string titular;
    unsigned int grupa;
public:
//    Curs() = default;
    ~Curs() = default;

    Curs(unsigned int _nrOre, const std::string & _titular, unsigned int _grupa) {
        this->nrOre = _nrOre;
        this->titular = _titular;
        this->grupa = _grupa;
    }

    unsigned int getNrOre() const {
        return nrOre;
    }

    void setNrOre(unsigned int nrOre) {
        Curs::nrOre = nrOre;
    }

    const string &getTitular() const {
        return titular;
    }

    void setTitular(const string &titular) {
        Curs::titular = titular;
    }

    unsigned int getGrupa() const {
        return grupa;
    }

    void setGrupa(unsigned int grupa) {
        Curs::grupa = grupa;
    }

    void afisareCurs () {
        std::cout << this->nrOre << " " << this->titular << " " << this->grupa << "\n";
    }
};

int main() {
//    Curs oop(6, "A", 261);
//    std::cout << oop.getNrOre() << " " << oop.getTitular() << " " << oop.getGrupa() << "\n";
//    oop.afisareCurs();

    std::vector<Curs> cursuri;
    unsigned int nrCursuri;
    std::cin >> nrCursuri;
    for (int i = 0 ; i < nrCursuri ; i++) {
        cursuri.push_back(Curs(i, "A", i * 10));
    }

    for (int i = 0 ; i < nrCursuri ; i++) {
        cursuri[i].afisareCurs();
    }
    return 0;
}
