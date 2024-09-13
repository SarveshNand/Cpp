#include <iostream>
#include <algorithm> // Required for algorithms (though not used here)
#include <list>      // Required for std::list

using std::cout;
using std::endl;
using std::list;

int main() {

// Initialize a list of integers
    list<int> mylist;

// Add elements to the list using push_back
    for(int i = 3; i <= 10; ++i) {
        mylist.push_back(i); // Adds elements 3 through 10 to the end of 'mylist'
    }

    // Output the first element in the list
    cout << "Front element: " << mylist.front() << endl;
    // Output the last element in the list
    cout << "Back element: " << mylist.back() << endl;

// Remove the last element from the list
    mylist.pop_back();

// Reverse the order of elements in the list
    mylist.reverse();

    // Output the elements in the list after reversing
    cout << "List after reverse: ";
    for(auto i : mylist) {
        cout << i << " "; // Print each element in the reversed list
    }
    cout << endl;

// Sort the elements in the list
    mylist.sort();

    // Output the elements in the list after sorting
    cout << "List after sort: ";
    for(auto i : mylist) {
        cout << i << " "; // Print each element in the sorted list
    }
    cout << endl;

    return 0;
}