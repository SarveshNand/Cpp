#include <iostream>
using std:: cout;
using std:: endl;

int main(){

    int rating = 5;

    if(rating == 1){
        puts("1 star rated");
    } else if (rating == 2){
        puts("2 star rated");
    } else if (rating == 3){
        puts("3 star rated");
    } else if (rating == 4){
        puts("4 star rated");
    } else if (rating == 5){
        puts("5 star rated");
    }
    else {
        puts("Enter number between 1 to 5");
    }

    if (true)
    {
        puts("Go for it");
    }
    

    // Ternary
    printf("Your rating feedback is: %s\n", rating == 4 ? "true block" : "false block");

    return 0;
}