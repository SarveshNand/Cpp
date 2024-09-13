#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

// Definition of the User class
class User {
    // Private member variable to store a secret integer
    int _secret = 22;

public:
    // Public member variable to store the user's name
    string name = "default";
    
    // Declaration of a public method to print a message using the user's name
    void classMessage();

    // Public method to set the value of the private _secret variable
    // This method takes a constant reference to an integer as an argument
    void setSecret(const int & newsecret) {
        _secret = newsecret;
    }

    // Public method to get the value of the private _secret variable
    // Marked as `const` because it does not modify any member variables
    int getSecret() const {
        return _secret;
    }
};

// Definition of the classMessage method outside the class
// This method prints a message including the user's name
void User::classMessage() {
    cout << "Class is great, " << name << endl;
}

int main() {
    // Create an instance of User named sam
    User sam;
    
    // Set the public name variable for the sam instance
    sam.name = "Sam";
    
    // Call the classMessage method for the sam instance
    sam.classMessage();
    
    // Set the secret value for the sam instance using the setSecret method
    sam.setSecret(333);
    
    // Get and print the secret value of the sam instance using the getSecret method
    cout << sam.getSecret() << endl;

    // Create another instance of User named sarvesh
    User sarvesh;
    
    // Call the classMessage method for the sarvesh instance
    sarvesh.classMessage();
    
    // Set the public name variable for the sarvesh instance
    sarvesh.name = "sarvesh";
    
    // Call the classMessage method again for the sarvesh instance
    sarvesh.classMessage();

    // Create a constant instance of User named rock
    // This instance is constant, meaning its member variables cannot be modified
    const User rock;

    // Get and print the secret value of the constant rock instance using the getSecret method
    // Since getSecret() is marked as const, it can be called on a constant object
    cout << rock.getSecret() << endl;
    
    return 0;
}