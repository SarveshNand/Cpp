#include <iostream>
#include <algorithm> // Required for std::partition and std::stable_partition
#include <vector>    // Required for std::vector

using std::cout;
using std::endl;
using std::vector;
using std::partition;
using std::stable_partition;

int main() {

// Initialize a vector of integers
    vector<int> myints = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Output the original vector
    cout << "Original values: " << endl;
    for(int x : myints) {
        cout << x << " "; // Print each element of the vector
    }
    cout << endl;

// Partition the vector into two groups based on a condition
    // The condition is specified using a lambda function: x % 2 == 0 (even numbers)
    partition(myints.begin(), myints.end(), [](auto x) { return x % 2 == 0; });

    // Output the vector after partitioning
    cout << "After std::partition: " << endl;
    for(int x : myints) {
        cout << x << " "; // Print each element of the partitioned vector
    }
    cout << endl;

// Stable partition the vector into two groups based on a condition
    // The condition is the same as before: x % 2 == 0 (even numbers)
    stable_partition(myints.begin(), myints.end(), [](auto x) { return x % 2 == 0; });

    // Output the vector after stable partitioning
    cout << "After std::stable_partition: " << endl;
    for(int x : myints) {
        cout << x << " "; // Print each element of the vector after stable partitioning
    }
    
    return 0;
}