#include <iostream>
#include <cstdint>
using std:: cout;
using std:: endl;

int main(){
    // 1 byte is of 8 bits

    printf("Size of this data type is %ld bits\n", sizeof(uint16_t) * 8);
    printf("Size of this data type is %ld bits\n", sizeof(int) * 8);
    printf("Size of this data type is %ld bits\n", sizeof(short int) * 8);
    printf("Size of this data type is %ld bits\n", sizeof(long int) * 8);
    printf("Size of this data type is %ld bits\n", sizeof(long long int) * 8);
    printf("Size of this data type is %ld bits\n", sizeof(char) * 8);

    // int fun = 0x16;
    // printf("Fun value is %d\n", fun);
    
    int fun = 0b00010110;
    printf("Fun value is %d\n", fun);

    return 0;
}