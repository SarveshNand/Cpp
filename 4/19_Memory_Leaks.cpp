#include <iostream>
using std:: cout;
using std:: endl;

int main(){

    int * myp;

    // myp = new int [10000];
    // cout << "Memory space allocated\n";

    try
    {
        myp = new int [10000];
        cout << "Memory space allocated\n";
    }
    catch(...)
    {
        cout << "failed in allocating memory\n";
    }

    delete [] myp;

    return 0;
}