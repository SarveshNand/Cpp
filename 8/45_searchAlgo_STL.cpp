#include <iostream>
#include <algorithm> // Required for std::sort and std::binary_search
using std::cout;
using std::endl;
using std::sort;
using std::binary_search;

int main() {

    // Array of integer values to be sorted
    int numbers[6] = {3, 2, 4, 7, 6, 9};

    // Output the unsorted values
    cout << "Unsorted values : " << endl;
    for(int n : numbers) {
        cout << n << " "; // Print each number in the array before sorting
    }
    
    // Sort the array in ascending order using std::sort
    sort(numbers, numbers + 6);

    // Output the sorted values
    cout << "\nSORTED values : " << endl;
    for(int n : numbers) {
        cout << n << " "; // Print each number in the array after sorting
    }

    // Perform binary search to check if the number 7 is in the sorted array
    // std::binary_search requires the range to be sorted
    if (binary_search(numbers, numbers + 6, 7)) {
        cout << "\n\n*** NUMBER FOUND ***\n" << endl; // Output if number is found
    } else {
        cout << "\n\n*** NUMBER NOT FOUND ***\n" << endl; // Output if number is not found
    }

    return 0;
}