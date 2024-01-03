//
// Created by msedghi on 12/22/23.
//

#ifndef SHAPE_PROCESSOR_RECTANGLE_H
#define SHAPE_PROCESSOR_RECTANGLE_H

#include "Shape.h"

class Rectangle: public Shape {

public:
    Rectangle() {std::cout << "Rectangle constructor" << std::endl;}
    ~Rectangle() {std::cout << "Rectangle destructor" << std::endl;}

    void readInput() override;

    double calculateArea() const override;
    double calculatePerimeter() const override;

private:
    double _width{0.0};
    double _length{0.0};
};


#endif //SHAPE_PROCESSOR_RECTANGLE_H
