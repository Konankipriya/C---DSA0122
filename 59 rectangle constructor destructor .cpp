#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
     
    Rectangle(double len, double wid) : length(len), width(wid) {
        std::cout << "Rectangle object created." << std::endl;
    }
    ~Rectangle() {
        std::cout << "Rectangle object destroyed." << std::endl;
    }
    double area() {
        return length * width;
    }
    double perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rectangle1(5.0, 3.0);
    Rectangle rectangle2(7.0, 4.0);
    std::cout << "Area of rectangle1: " << rectangle1.area() << std::endl;
    std::cout << "Perimeter of rectangle1: " << rectangle1.perimeter() << std::endl;

    std::cout << "Area of rectangle2: " << rectangle2.area() << std::endl;
    std::cout << "Perimeter of rectangle2: " << rectangle2.perimeter() << std::endl;

    return 0;
}
