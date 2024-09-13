// Always use float with caution

#include <iostream>
using std:: cout;
using std:: endl;

int main(){

    printf("Float size is %ld bits\n", sizeof(long) * 8);
    printf("Float size is %ld bits\n", sizeof(long double) * 8);

    float my_p_value = 20.2 + 20.2;
    
    if(my_p_value == 40.400002){
        puts("You got it right");
    }else{
        puts("something");
    }

    // printf("My P value is: %f in float\n", my_p_value);
    printf("My P value is: %1.30f in float\n", my_p_value);

    return 0;
}