//
// Created by msedghi on 12/22/23.
//

#include "Rectangle.h"

void Rectangle::readInput() {
    std::cout << "Give me the width of the rectangle: " << std::endl;
    std::cin >> _width;
    std::cout << "Give me the length of the rectangle: " << std::endl;
    std::cin >> _length;
}

double Rectangle::calculateArea() const {
    return _width * _length;
}

double Rectangle::calculatePerimeter() const {
    return 2 * (_width + _length);
}

