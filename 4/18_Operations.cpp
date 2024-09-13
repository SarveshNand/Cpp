#include <iostream>
using std:: cout;
using std:: endl;

int main(){

    // ---------------------------Logical---------------------------

    int life = 3;
    int points = 4;

    int score = 2;

    score += points;

    // if (life != 5){
    //     puts("Into the if block");
    // }


    bool isSignedIn = true;
    bool isAdmin = true;
    bool isFbUser = false;
    bool isGoogleUser = true;

    // if(isSignedIn && isAdmin){
    //     puts("Welcome admin");
    // } else {
    //     puts("No admin access!");
    // }

    // if (isFbUser || isGoogleUser)
    // {
    //     puts("Welcome user");
    // }

    // if( (isGoogleUser || isFbUser) && isSignedIn && isAdmin){
    //     puts("Welcome admin");
    // } else {
    //     puts("No admin access!");
    // }

    // -------------------------------Bitwise--------------------------------

    unsigned int x = 6;
    unsigned int y = 7;
    
    // unsigned int z = x & y;
    // unsigned int z = x | y;
    // unsigned int z = x ^ y;
    // unsigned int z = y >> 1;
    unsigned int z = y << 1;

    cout << "Value of z is: " << z << endl;

    return 0;
}