#include <iostream>
using std::cout;
using std::endl;

enum MsOffice {
    BOLD,
    // BOLD = 5,
    ITALICS,
    UNDERLINE,
    CROSSED
};

int main(){

    int myAttributes = ITALICS;

    cout << myAttributes << endl;

    return 0;
}