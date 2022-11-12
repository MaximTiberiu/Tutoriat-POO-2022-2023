#include <iostream>

class Fractie {
private:
    int numarator;
    int numitor;
    void simplifica();

public:
    Fractie() = default;
    ~Fractie() = default;

    Fractie(int numarator = 0, int numitor = 1);
    Fractie(const Fractie& fractie);

    void citire();
    void afisare();

    friend Fractie suma(const Fractie &fractie1, const Fractie &fractie2);
    friend Fractie produs(const Fractie &fractie1, const Fractie &fractie2);

    friend std::istream & operator >>(std::istream &in, Fractie & fractie);
    friend std::ostream & operator <<(std::ostream &out, Fractie & fractie);
};

Fractie::Fractie(int numarator, int numitor) {
    this->numarator = numarator;
    this->numitor = numitor;
}

Fractie::Fractie(const Fractie &fractie) {
    this->numarator = fractie.numarator;
    this->numitor = fractie.numitor;
}

void Fractie::citire() {
    std::cin >> numarator >> numitor;
}

void Fractie::afisare() {
    std::cout << numarator << "/" << numitor << "\n";
}

Fractie suma(const Fractie &fractie1, const Fractie &fractie2) {
    int numarator = fractie1.numarator * fractie2.numitor + fractie1.numitor * fractie2.numarator;
    int numitor = fractie1.numitor * fractie2.numitor;

    Fractie rezultat(numarator, numitor);
    rezultat.simplifica();

    return rezultat;
}

Fractie produs(const Fractie &fractie1, const Fractie &fractie2) {
    int numarator = fractie1.numarator * fractie2.numarator;
    int numitor = fractie1.numitor * fractie2.numitor;

    Fractie rezultat(numarator, numitor);
    rezultat.simplifica();
    return rezultat;
}

void Fractie::simplifica() {
    int a = numarator;
    int b = numitor;

    while(b) {
        int r = a % b;
        a = b;
        b = r;
    }

    numarator /= a;
    numitor /= a;

}

std::istream & operator >>(std::istream &in, Fractie & fractie) {
    in >> fractie.numarator >> fractie.numitor;
    return in;
}

std::ostream & operator <<(std::ostream &out, Fractie & fractie) {
    out << fractie.numarator << "/" << fractie.numitor << "\n";
    return out;
}

int main() {
    Fractie f1(1, 2);
    Fractie f2(2, 3);

    Fractie sum = suma(f1, f2);
    Fractie prod = produs(f1, f2);
    prod.afisare();
    return 0;
}
