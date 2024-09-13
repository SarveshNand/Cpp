#include <iostream>
using std::cout;
using std::endl;

int getTwo(){
    return 2;
}

void interesting(){
    puts("I am interesting");
}

int main(){

    int whatIgot = getTwo();


    // To point the functions we have to make the pointer a type of function which can point the function.
    // That's why we are adding a parenthesis because every function has parenthesis.
    // We are taking the pointer in parenthesis also to make it 1 unit.
    
    // We are pointing the memory of interesting here so we are not adding parenthesis to it because it will call it.

    void (*pointsToInteresting)() = interesting;

    cout << whatIgot << endl;

    pointsToInteresting();  // Dereferencing and it will call the function
    (*pointsToInteresting)();  // Same thing but a different way to do if we add *

    return 0;
}