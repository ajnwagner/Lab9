// Austin Wagner, Nihaal Vora, Jerome Booth
// 11-14-2022
// CPSC 1021 - Lab 8

#include "Shape.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include "Trapezoid.h"
#include <iostream>
#include <iomanip>

#include <vector>

int main()
{
  // *** VARIABLE DECLARATIONS ***
  Circle circle(2.0);
  Square square(2.0);
  Rectangle rectangle(2.5, 3.0);
  Trapezoid trapezoid(2.5, 3.5, 4.0);

  Circle circle2(2);
  Square square2(2);
  Rectangle rectangle2(2, 3);
  Trapezoid trapezoid2(2, 6, 5);

  std::vector<Shape*>shapeVect;
  
  // Add each shape to the Shape vector
  shapeVect.push_back(&circle);
  shapeVect.push_back(&square);
  shapeVect.push_back(&rectangle);
  shapeVect.push_back(&trapezoid);
  
  shapeVect.push_back(&circle2);
  shapeVect.push_back(&square2);
  shapeVect.push_back(&rectangle2);
  shapeVect.push_back(&trapezoid2);

  // Loop through each element in the shape vector
  for (Shape* i: shapeVect) {
    // Print out the name of the shape and the area
    std::cout << "Area of " << i->printName() << " is: ";
    std::cout << std::setprecision(1) << std::fixed;   
    std::cout << i->getArea() << std::endl;   
  }
  // make a vector 'vector<Type>shapeVect {element0, element1, element2, element3}'
  // where 'Type' is a pointer to class Shape and each element is the memory address
  // of one of objects you have instantiated above
  
  // use a range-based for loop to print the name and area of each object using
  // functions printName() and getArea() accessed through the base class pointer
  
   return 0;
}
