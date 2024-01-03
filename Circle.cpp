//
// Created by msedghi on 12/22/23.
//

#include "Circle.h"
#include <iostream>
#include <cmath>

void Circle::readInput() {
    std::cout << "Give me the radius of the circle: " << std::endl;
    std::cin >> _radius;
}

double Circle::calculateArea() const {
    return M_PI * _radius * _radius;
}

double Circle::calculatePerimeter() const {
    return 2 * M_PI * _radius;
}
