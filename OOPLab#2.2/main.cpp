#include <iostream>
#include "Integer.h"
#include "Real.h"

int main() {
    Integer a, b, c;
    Real x, y, z;

    std::cout << "Enter value for a: ";
    std::cin >> a;
    std::cout << "Enter value for b: ";
    std::cin >> b;

    c = a + b;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "a + b = " << c << std::endl;
    std::cout << "Is a even? " << a[0] << std::endl;
    std::cout << "a ^ 2 = " << (a ^ 2) << std::endl;
    std::cout << "Is a prime? " << ~a << std::endl;

    std::cout << "Enter value for x: ";
    std::cin >> x;
    std::cout << "Enter value for y: ";
    std::cin >> y;

    z = x - y;
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    std::cout << "x - y = " << z << std::endl;

    return 0;
}
