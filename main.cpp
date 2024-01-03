#include <iostream>
#include <cmath>
#include <memory>

#include "Circle.h"
#include "Rectangle.h"


using namespace std;

enum ShapeType {
    CIRCLE = 1,
    RECTANGLE = 2
};

std::unique_ptr<Shape> createShape(ShapeType shapeType) {
    unique_ptr<Shape> shape{nullptr};
    switch (shapeType) {
        case CIRCLE:
            shape = make_unique<Circle>();
            break;
        case RECTANGLE:
            shape = make_unique<Rectangle>();
            break;
        default:
            cout << "Invalid shape type" << endl;
            break;
    }
    return shape;
}


int main() {

    int input{0};
    cout << "Give me the shape type: circle = 1, rectangle = 2" << endl;
    cin >> input;

    ShapeType shapeType = static_cast<ShapeType>(input);

    Shape::printHello();

    auto shape = createShape(shapeType);

    if (shape == nullptr)
        throw runtime_error("Invalid shape type");


    //shape->process();

    Shape* shape2 = dynamic_cast<Shape*>(shape.get());

    int input2{0};
    double input3 = (double)input2;
    double input4 = static_cast<double>(input2);
    double input5 = double(input2);

    int* myArray;



    shape2->process();

    delete shape2;

    return 0;
}
