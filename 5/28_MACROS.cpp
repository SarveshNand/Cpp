#include <iostream>
#include <string>
#include <cstdint>

using std::cout;
using std::endl;
using std::string;

// Define macros for convenience

#define END return 0
#define ENDMESSAGE cout << "Program ends here\n"

#define LCOINT int8_t
#define console_log(a) cout <<  a << endl


int main(){

    // Macros can be powerful for simple text replacement and conditional compilation, but they lack type safety and scope control.


    // Use the LCOINT macro to define a variable of type int8_t
    LCOINT a = 4;
    cout << a << endl;      // Output the value of a


    // Use the console_log macro to print the score
    int score = 400;
    console_log(score);


    // Use the console_log macro to print the name
    string name = "sarvesh";
    console_log(name);


    // Use macros to print an ending message and return from main
    ENDMESSAGE;
    END;
}