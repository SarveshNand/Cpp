#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

// Definition of the Rectangle class
class Rectangle {
    // Private member variables to store dimensions of the rectangle
    double _length;
    double _breadth;

public:
    // Parameterized constructor with default values
    Rectangle(double l = 2.0, double b = 2.0) {
        _length = l;  // Initializing _length with the value of l
        _breadth = b; // Initializing _breadth with the value of b
    }

    // Method to calculate and return the area of the rectangle
    double Area() const {
        // 'this' points to the current object
        // 'this->_length' and 'this->_breadth' refer to the current object's _length and _breadth
        return this->_length * this->_breadth;
    }

    // Method to compare the area of the current rectangle with another rectangle
    // Returns true if the area of the current rectangle (this) is greater than the other rectangle's area
    bool compare(const Rectangle &rectangle) const {
        // Using 'this' to call the Area method of the current object
        // 'rectangle.Area()' calls the Area method of the other rectangle passed as an argument
        return this->Area() > rectangle.Area();
    }
};

int main() {
    // Create two Rectangle objects with specified dimensions
    Rectangle h1(3.0, 3.0);
    Rectangle h2(4.0, 4.0);

    // Compare h2 with h1 and output the result
    // Calling compare on h2, so 'this' in compare refers to h2
    // 'rectangle' in compare refers to h1
    if (h2.compare(h1)) {
        cout << "H2 is bigger\n"; // h2's area is greater than h1's area
    } else {
        cout << "H2 is smaller\n"; // h2's area is not greater than h1's area
    }

    return 0;
}