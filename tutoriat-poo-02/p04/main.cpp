#include <iostream>

class Complex {
private:
    float re;
    float img;

public:
    Complex() = default;
    ~Complex() = default;

    Complex(float re, float img);

    void afisare();

    Complex operator+(const Complex &c);
    Complex operator*(const Complex &c);

    bool equals(const Complex &c);
};

Complex::Complex(float re, float img) {
    this->re = re;
    this->img = img;
}

void Complex::afisare() {
    std::cout << re;
    if (img >= 0) {
        std::cout << "+" << img << "i\n";
    } else {
        std:: cout << img << "i\n";
    }
}

Complex Complex::operator+(const Complex &c) {
    Complex sum;
    sum.re = re + c.re;
    sum.img = img + c.img;
    return sum;
}

Complex Complex::operator*(const Complex &c) {
    Complex prod;
    prod.re = re * c.re - img * c.img;
    prod.img = c.re * img + c.img * re;
    return prod;
}

bool Complex::equals(const Complex &c) {
    return (this->re == c.re && this->img == c.img);
}


int main() {
    Complex c1(1, 2);
    Complex c2(1, 2);
    Complex sum = c1 + c2;
    Complex prod = c1 * c2;
    sum.afisare();
    prod.afisare();
    std::cout << c1.equals(c2) << "\n";
    return 0;
}
