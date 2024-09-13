#include <iostream>
#include <algorithm> // Required for std::sort and std::sort_heap
using std::cout;
using std::endl;
using std::sort;
using std::sort_heap;

int main() {

    // Array of floating-point numbers to be sorted
    float numbers[6] = {3.3, 2.4, 4.1, 7.9, 6.5, 9.7};

    // Output the unsorted values
    cout << "Unsorted values : " << endl;
    for(float n : numbers) {
        cout << n << " "; // Print each number in the array
    }
    
    // Sort the array in ascending order using std::sort
    sort(numbers, numbers + 6);
    // sort_heap(numbers, numbers + 6); // Uncomment this to sort a heap (not applicable here)

    // Output the sorted values
    cout << "\nSORTED values : " << endl;
    for(float n : numbers) {
        cout << n << " "; // Print each number in the sorted array
    }

    return 0;
}