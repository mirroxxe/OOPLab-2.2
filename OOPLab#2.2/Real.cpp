#include "Real.h"
#include <iostream>
#include <sstream>

Real::Real() : value(0.0) {}

Real::Real(double val) : value(val) {}

Real::Real(const Real& other) : value(other.value) {}

Real::~Real() {}

double Real::getValue() const {
    return value;
}

void Real::setValue(double val) {
    value = val;
}

void Real::init(double val) {
    value = val;
}

void Real::read() {
    std::cout << "Enter a real number: ";
    std::cin >> value;
}

void Real::Display() const {
    std::cout << value;
}

std::string Real::toString() const {
    std::stringstream ss;
    ss << value;
    return ss.str();
}

Real Real::operator--(int) {
    return Real(value - 1.0);
}

Real operator--(Real& r, int) {
    Real old = r;
    r.value -= 1.0;
    return old;
}

Real Real::operator-(const Real& other) const {
    return Real(value - other.value);
}

std::ostream& operator<<(std::ostream& out, const Real& num) {
    out << num.value;
    return out;
}

std::istream& operator>>(std::istream& in, Real& num) {
    in >> num.value;
    return in;
}
