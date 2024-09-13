#include <iostream>

using std:: cout;
using std:: endl;

void sayHello(){
    puts("Hello there!");
}

int sayTwo(){
    // puts("2");
    return 2;
}

void sayThree(){
    puts("3");
}

int main(){

    sayHello();
    // sayTwo();
    printf("%d\n", sayTwo() + 3);
    // sayThree();

    return 0;
}