#include <iostream>
#include <string>
using std:: string;
using std:: cout;
using std:: endl;

string api_call(){
    return "got some data from web\n";
}

int another_api_call(){
    return 5;
}

int main(){

    // auto automatically assigns what type of data type we have to assign because for example on a database the data can be in form like string, int, float, etc. and we don't know about that.

    // It's not a good practice to use auto everytime we only use auto when we don't know what will be the data type we will get

    auto response = api_call();
    auto rep = another_api_call();

    cout << "API CALL VALUE: " << response;
    cout << "ANOTHER API CALL VALUE: " << rep << endl;

    if (typeid(response) == typeid(string))
    {
        puts("Type of both ID is string\n");
    }
    if (typeid(rep) == typeid(int))
    {
        puts("Type of both ID is int\n");
    }
    

    return 0;
}