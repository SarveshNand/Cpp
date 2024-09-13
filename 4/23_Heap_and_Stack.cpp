#include <iostream>
using std::cout;
using std::endl;

struct User{
    const int id;
    int age;

    User() : id(001), age(22){}
};

int main(){

    // Stack has predefined size --> Very fast

    int score = 100;
    User mike;

    // Heap is also predefined but it can grow --> Not that much fast

    int* heap_score = new int;
    *heap_score = 200;

    User* nike = new User();


    delete heap_score;
    delete nike;

    return 0;
}