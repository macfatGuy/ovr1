﻿#include <iostream>

class Fraction {
private:
    int numerator_;
    int denominator_;

public:
    Fraction(int numerator, int denominator) : numerator_(numerator), denominator_(denominator) {
        if (denominator_ == 0) {
            throw std::invalid_argument("Знаменатель не может быть равен нулю!");
        }
    }

    bool operator==(const Fraction& other) const {
        return numerator_ * other.denominator_ == denominator_ * other.numerator_;
    }

    bool operator!=(const Fraction& other) const {
        return !(*this == other);
    }

    bool operator<(const Fraction& other) const {
        return numerator_ * other.denominator_ < denominator_ * other.numerator_;
    }

    bool operator>(const Fraction& other) const {
        return numerator_ * other.denominator_ > denominator_ * other.numerator_;
    }

    bool operator<=(const Fraction& other) const {
        return !(*this > other);
    }

    bool operator>=(const Fraction& other) const {
        return !(*this < other);
    }
};

int main() {
    Fraction f1(4, 3);
    Fraction f2(6, 11);

    std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
    std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
    std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
    std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
    std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
    std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
    return 0;
}

