#include <iostream>
#include <sstream>

class Integer {
private:
    int value;

public:
    Integer();
    Integer(int val);
    Integer(const Integer& other);

    int getValue() const;
    void setValue(int val);

    std::string toString() const;

    Integer operator+(const Integer& other) const;
    Integer operator-(const Integer& other) const;
    Integer operator*(const Integer& other) const;
    Integer operator/(const Integer& other) const;
    Integer operator%(const Integer& other) const;
    bool operator[](int index) const;
    Integer operator^(int power) const;
    bool operator~() const;

    friend std::ostream& operator<<(std::ostream& out, const Integer& num);
    friend std::istream& operator>>(std::istream& in, Integer& num);

    void init(int val);
    void read();
    void Display() const;
};