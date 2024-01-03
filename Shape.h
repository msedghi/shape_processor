//
// Created by msedghi on 12/22/23.
//

#ifndef SHAPE_PROCESSOR_SHAPE_H
#define SHAPE_PROCESSOR_SHAPE_H

#include <iostream>

class Shape {

public:
    Shape() = default;
    Shape(const Shape&) = delete;
    explicit Shape(double area, double perimeter): _area{area}, _perimeter{perimeter} {}
    ~Shape() {std::cout << "Shape destructor" << std::endl;}

    virtual void readInput(){std::cout << "Shape readInput" << std::endl;}

    virtual double calculateArea() const {std::cout << "Shape calculateArea" << std::endl; return 0.0;}
    virtual double calculatePerimeter() const {std::cout << "Shape calculatePerimeter" << std::endl; return 0.0;}

    void printResult() const {
        std::cout << "The area of the shape is: " << _area << std::endl;
        std::cout << "The perimeter of the shape is: " << _perimeter << std::endl;}

    void process() {
        readInput();
        _area = calculateArea();
        _perimeter = calculatePerimeter();
        printResult();
    }

    static void printHello() {std::cout << "Hello from Shape" << std::endl;}

protected:
    double _area{0.0};
    double _perimeter{0.0};
};


#endif //SHAPE_PROCESSOR_SHAPE_H
