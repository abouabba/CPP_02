#include <iostream>

class Point {
public:
    int x;
    int y;

    Point(int x_coord = 0, int y_coord = 0) : x(x_coord), y(y_coord) {}

    // Operator function to overload the '+' operator
    Point operator-(const Point& other) const {
        return Point(x + other.x, y + other.y);
    }

    void display() const {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    Point p1(10, 20);
    Point p2(5, 7);

    // Using the overloaded '+' operator
    Point p3 = p1 - p2; 

    std::cout << "Point 1: ";
    p1.display();
    std::cout << "Point 2: ";
    p2.display();
    std::cout << "Sum of Points: ";
    p3.display(); // Expected output: (15, 27)

    return 0;
}
