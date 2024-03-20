#include "Integer.h"
#include <cmath>

Integer::Integer() : value(0) {}

Integer::Integer(int val) : value(val) {}

Integer::Integer(const Integer& other) : value(other.value) {}

int Integer::getValue() const {
    return value;
}

void Integer::setValue(int val) {
    value = val;
}

std::string Integer::toString() const {
    std::stringstream ss;
    ss << value;
    return ss.str();
}

Integer Integer::operator+(const Integer& other) const {
    return Integer(value + other.value);
}

Integer Integer::operator-(const Integer& other) const {
    return Integer(value - other.value);
}

Integer Integer::operator*(const Integer& other) const {
    return Integer(value * other.value);
}

Integer Integer::operator/(const Integer& other) const {
    return Integer(value / other.value);
}

Integer Integer::operator%(const Integer& other) const {
    return Integer(value % other.value);
}

void Integer::init(int val) {
    value = val;
}

void Integer::read() {
    std::cout << "Enter an integer: ";
    std::cin >> value;
}

void Integer::Display() const {
    std::cout << value;
}

bool Integer::operator[](int index) const {
    return value % 2 == 0;
}

Integer Integer::operator^(int power) const {
    return Integer(std::pow(value, power));
}

bool Integer::operator~() const {
    if (value <= 1)
        return false;
    for (int i = 2; i <= sqrt(value); ++i) {
        if (value % i == 0)
            return false;
    }
    return true;
}

std::ostream& operator<<(std::ostream& out, const Integer& num) {
    out << num.value;
    return out;
}

std::istream& operator>>(std::istream& in, Integer& num) {
    in >> num.value;
    return in;
}