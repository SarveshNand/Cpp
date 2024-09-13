#include <iostream>
#define NULL 0

using std::cout;
using std::endl;

void printval(int a){
    printf("Integer value is %d\n", a);
}
void printval(double a){
    printf("Double value is %f\n", a);
}
void printval(int * a){
    printf("Pointer value is %p\n", a);
}

int main(){

    printval(5);    //  Calls printval(int)
    printval(5.3);   // Calls printval(double)

    // Using NULL, which is defined as 0, will call printval(int)

    printval(NULL);     // Calls printval(int) due to ambiguity; NULL is 0

    // Using nullptr, which is type-safe and unambiguous, will call printval(int*)

    printval(nullptr);      // Calls printval(int*)

    return 0;
}