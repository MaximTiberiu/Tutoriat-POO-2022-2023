#include <iostream>

// Implementarea clasei Fractie – citire, afișare, suma.

class Fractie {
private:
    int numarator;
    int numitor;

public:
    Fractie() = default;
    ~Fractie() = default;

    Fractie(int _numarator = 0, int _numitor = 1) {
        numarator = _numarator;
        numitor = _numitor;
    }

    int getNumarator() const {
        return numarator;
    }

    void setNumarator(int numarator) {
        Fractie::numarator = numarator;
    }

    int getNumitor() const {
        return numitor;
    }

    void setNumitor(int numitor) {
        Fractie::numitor = numitor;
    }

    void citire() {
        std::cin >> numarator >> numitor;
    }

    void afisare() {
        std::cout << numarator << " / " << numitor << "\n";
    }

    friend Fractie suma(const Fractie &f1, const Fractie &f2) {
        int numarator = f1.numarator * f2.numitor + f1.numitor * f2.numarator;
        int numitor  = f1.numitor * f2.numitor;
        Fractie fractie(numarator, numitor);
        return fractie;
    }
};

int main() {
    Fractie f1(1, 2);
    Fractie f2(1, 3);
    Fractie rezultat = suma(f1, f2);
    rezultat.afisare();
    return 0;
}
