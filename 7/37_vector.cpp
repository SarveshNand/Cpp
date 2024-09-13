#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::ostream;

// Define a struct to represent a set of four corner values
struct Corners {
    float a, b, c, d;
};

// Overload the stream insertion operator for Corners
// This allows us to output Corners objects using cout
ostream& operator << (ostream& stream, const Corners& corner) {
    stream << corner.a << " " << corner.b << " " << corner.c << " " << corner.d;
    return stream;
}

int main() {
    // Create a vector of integers
    vector<int> inty;

    // Add elements to the vector
    inty.push_back(2); // Add 2 to the end of the vector
    inty.push_back(3); // Add 3 to the end of the vector
    inty.push_back(4); // Add 4 to the end of the vector
    inty.push_back(5); // Add 5 to the end of the vector

    // Iterate over the vector and print each element
    for (auto i = inty.begin(); i != inty.end(); ++i) {
        // Dereference iterator 'i' to get the value and print it
        cout << *i << endl;
    }
    
    // Create a vector of Corners
    vector<Corners> corners;

    // Add elements to the vector
    corners.push_back({1, 2, 3, 4}); // Add a Corners object with values (1, 2, 3, 4)
    corners.push_back({5, 6, 7, 8}); // Add a Corners object with values (5, 6, 7, 8)

    // Iterate over the vector and print each Corners object
    for (int i = 0; i < corners.size(); ++i) {
        // Access each Corners object by index and print it
        cout << corners[i] << endl;
    }
    
    return 0;
}