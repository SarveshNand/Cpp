// It is about Containers which is mostly about vectors, so it is what it is.   :)

#include <iostream>
#include <algorithm> // Required for algorithms (though not used here)
#include <vector>    // Required for std::vector

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {

    // Initialize a vector of integers
    vector<int> nums;

    // Initialize a vector of strings with a list of superhero names
    vector<string> heros {"batman", "flash", "superman", "robin"};

    // Add elements to the vector 'nums' using push_back
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(8);

    // Add additional elements to the vector 'nums'
    for(int i = 0; i <= 5; ++i) {
        nums.push_back(i); // Adds elements 0 to 5 to 'nums'
    }

    // Output the size, capacity, and maximum size of the 'nums' vector
    cout << "Size of nums: " << nums.size() << endl;
    cout << "Capacity of nums: " << nums.capacity() << endl;
    cout << "Max size of nums: " << nums.max_size() << endl;

    // Output whether the 'nums' vector is empty or not
    cout << "Is nums empty? " << nums.empty() << endl;

    // Output the elements in the 'nums' vector using an iterator
    cout << "Elements in nums: ";
    for(auto i = nums.begin(); i != nums.end(); ++i) {
        cout << *i << " "; // Print each element pointed to by the iterator
    }
    cout << endl;

    return 0;
}