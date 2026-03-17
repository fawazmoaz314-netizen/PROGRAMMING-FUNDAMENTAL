#include <iostream>
using namespace std;
int main() {
    string shape;
    double area = 0;
    cout << "Enter the shape (square, rectangle, circle, triangle): ";
    cin >> shape;

    if (shape == "square") {
        double side;
        cin >> side;
        area = side * side;
    }
    else if (shape == "rectangle") {
        double length, width;
        cin >> length >> width;
        area = length * width;
    }
    else if (shape == "circle") {
        double radius;
        double PI = 3.1415;
        cin >> radius;
        area = PI * radius * radius;
    }
    else if (shape == "triangle") {
        double base, height;
        cin >> base >> height;
        area = (base * height) / 2.0;
    }
    
    cout << area << endl;

    return 0;
}