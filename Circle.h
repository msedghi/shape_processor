//
// Created by msedghi on 12/22/23.
//

#ifndef SHAPE_PROCESSOR_CIRCLE_H
#define SHAPE_PROCESSOR_CIRCLE_H

#include "Shape.h"

class Circle: public Shape {

public:
    Circle() {std::cout << "Circle constructor" << std::endl;}
    ~Circle() {std::cout << "Circle destructor" << std::endl;}

    void readInput() override;

    double calculateArea() const override;
    double calculatePerimeter() const override;

private:
    double _radius{0.0};

};


#endif //SHAPE_PROCESSOR_CIRCLE_H
