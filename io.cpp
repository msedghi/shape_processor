//
// Created by msedghi on 12/22/23.
#include <iostream>
#include "./io.h"

double readRadius() {
    double radius;
    std::cout << "Give me the radius of the circle: " << std::endl;
    std::cin >> radius;
    return radius;
}

void printResult(double area, double perimeter) {
    std::cout << "The area of the circle is: " << area << std::endl;
    std::cout << "The perimeter of the circle is: " << perimeter << std::endl;
}

//
