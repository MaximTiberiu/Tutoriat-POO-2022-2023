//
// Created by Tiberiu on 11/9/2022.
//

#ifndef P02_03_PUNCT_HPP
#define P02_03_PUNCT_HPP

class Punct {
private:
    int x{};
    int y{};

public:
    Punct() = default;
    ~Punct() = default;

    Punct(int x, int y);

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

};

#endif //P02_03_PUNCT_HPP
