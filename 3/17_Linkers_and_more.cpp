// ---------------------------Linkers----------------------------------
// https://stackoverflow.com/questions/9248533/how-does-a-linker-know-what-all-libraries-to-link
// https://stackoverflow.com/questions/3322911/what-do-linkers-do


// ---------------------------Qualifiers-------------------------------
// 1) Modification Qualifiers : 
//                                 const
//                                 volatile
//                                 mutable


// 2) Life duration Qualifiers:
//                                 static
//                                 register
//                                 extern
//                                 auto


#include <iostream>
using std:: cout;
using std:: endl;

int lifeUp(){
    // int life = 3;
    static int life = 3;
    // return life = life + 1;
    // return life++;
    return ++life;
}

int main(){

    int life = 3;
    cout << "Your starting game life is: " << life << endl;

    life = lifeUp();
    printf("Your updated game life is %d\n", life);
    
    life = lifeUp();
    printf("Your updated game life is %d\n", life);

    return 0;
}