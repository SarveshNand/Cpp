#include <iostream>
#include <string>
using namespace std;

int main(){
    string my_color;
    cout << "\nEnter your fav. colour: ";
    getline(cin, my_color);
    cout << "Hey " << my_color << " is my fav. too\n";

    return 0;
}