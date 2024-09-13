#include <iostream>

using std:: endl;
using std:: cout;

int main(){

    // float call_api = 20.2;
    char call_api = 's';

    try
    {
        cout << "trying to use API value\n";
        cout << "did some testing with api value\n";
        throw call_api;
        cout << "No code execut after return and throw\n";
    }
    catch(int x)
    {
        cout << "integer exception handled\n";
    }
    catch(float f){
        cout << "float exception handled\n";
    }
    catch(...){
        cout << "something went wrong\n";
    }

    cout << "Keep on moving with rest of code\n";

    return 0;
}