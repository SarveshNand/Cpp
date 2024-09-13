#include <iostream>
#include <algorithm> // Required for algorithms (though not used here)
#include <queue>     // Required for std::queue and std::priority_queue

using std::cout;
using std::endl;
using std::queue;
using std::priority_queue;

int main() {

// Initialize a queue of integers
    queue<int> myq;

// Add elements to the queue using push
    myq.push(10);
    myq.push(12);
    myq.push(14);
    myq.push(16);

    // Output the front and back elements of the queue
    cout << "Front element: " << myq.front() << endl;
    cout << "Back element: " << myq.back() << endl;

// Remove the front element from the queue
    myq.pop();
    
    // Output the new front element after popping
    cout << "New front element after pop: " << myq.front() << endl;

    // Output all remaining elements in the queue
    cout << "Elements in queue: ";
    while (!myq.empty()) {
        cout << " " << myq.front(); // Print the front element
        myq.pop(); // Remove the front element
    }
    cout << "\n";

// Demonstrate the state of the queue after all elements have been removed
    cout << "Outside loop" << endl;

// Uncommenting the following line will cause undefined behavior
    // cout << "Attempting to access front of empty queue: " << myq.front() << endl;

// Initialize a priority queue of integers
    priority_queue<int> mypq;

// Add elements to the priority queue using push
    mypq.push(10);
    mypq.push(40);
    mypq.push(50);
    mypq.push(5);

    // Output all elements in the priority queue
    cout << "Elements in priority queue: ";
    while (!mypq.empty()) {
        cout << " " << mypq.top(); // Print the top element (largest element)
        mypq.pop(); // Remove the top element
    }
    cout << "\n";

    return 0;
}