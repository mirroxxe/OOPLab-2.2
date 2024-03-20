#include <iostream>
#include <sstream>

class Real {
private:
    double value;

public:
    Real();
    Real(double val);
    Real(const Real& other);
    ~Real();

    double getValue() const;
    void setValue(double val);

    std::string toString() const;

    Real operator--(int);
    Real operator-(const Real& other) const;
    friend Real operator--(Real& r, int);

    friend std::ostream& operator<<(std::ostream& out, const Real& num);
    friend std::istream& operator>>(std::istream& in, Real& num);

    void init(double val);
    void read();
    void Display() const;
};