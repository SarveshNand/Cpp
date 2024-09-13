#include <iostream>
using namespace std;

int main(){

    int card;
    card = 40;
    int my_card = card;

    int *myp;
    myp = &card;

    my_card = *myp; //pointer dereference

    printf("Value of card is: %d\n", my_card);
    printf("Value of card is: %p\n", myp);
    printf("Value of card is: %d\n", my_card);
    printf("Value of card is: %p\n", my_card);

    return 0;
}