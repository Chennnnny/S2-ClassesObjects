#include <iostream>
#include <string>
using namespace std;

class Point2D {
public:
    double x;
    double y;

    Point2D(double x_val, double y_val) {
        this -> x = x_val;
        this -> y = y_val;
    }

    bool isEqual(const Point2D& other) {
        return (this->x==other.x && this->y==other.y); 
    }
};

class Rectangle {
public:
   // TODO
    Point2D bottomLeft;
    double width;
    double height;

    Rectangle(const Point2D& bottom_Left, const Point2D& top_Right) : bottomLeft(bottom_Left) {
        this -> width = top_Right.x - bottom_Left.x;
        this -> height = top_Right.y - bottom_Left.y;
    }

    double perimeter() {
        return (width + height) * 2;
    }

    double area() {
        return width * height;
    }

    bool isEqual(const Rectangle& other) {
        return bottomLeft.isEqual(other.bottomLeft) && (width == other.width) && (height == other.height);
    }
};

int main() {
    Point2D p1(0,0);
    Point2D p2(10,20);

    Rectangle r1(p1, p2);
    Rectangle r2(p1, p2);

    string message = r1.isEqual(r2)? "rectangles are equal" : "rectangles are not equal";
    cout<< message << std::endl;
  

    return 0;
}