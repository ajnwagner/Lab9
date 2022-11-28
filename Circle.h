// Austin Wagner
// 11-14-2022
// CPSC 1021 - Lab 8

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"

class Circle : public Shape {
    private:
        double radius {0};
        const double PI {3.14};
    public:
        Circle() = default;
        Circle(double r) : Shape("Circle"), radius(r) {};
        virtual double getArea() override;
};

#endif
