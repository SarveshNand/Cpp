#include <iostream>
// #include "24_b_adder.h"     // It will import the data from that file (I'm commenting it because I'm using template) 


using std::cout;
using std::endl;

// For Value
// void lifeUp(int life){
//     ++life;
// }



// For Reference
// void lifeUp(int *life){
//     ++(*life);
// }



// Reference but in another way
void lifeUp(int &life){
    ++life;
}


// templates
template <typename T>

T addMe(T a, T b){
    return a + b;
}



int main(){

    // CALL BY VALUE

    // int life = 3;
    // lifeUp(life);
    // cout << life << endl;


    // CALL BY REFERENCE

    // int life = 3;
    // lifeUp(&life);
    // cout << life << endl;

    int life = 3;
    lifeUp(life);
    cout << life << endl;

    int v1 = 4;
    int v2 = 5;
    float v3 = 5.6;
    float v4 = 7.5;

    cout << addMe(v1, v2) << endl;
    cout << addMe(v3, v4) << endl;

    return 0;
}