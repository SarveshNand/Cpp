#include <iostream>
#include <memory>
using std::cout;
using std::endl;
using std::unique_ptr;
using std::shared_ptr;
using std::weak_ptr;
using std::make_unique;
using std::make_shared;

// * Smart Pointers
// They are wrappers around raw pointers that help manage the lifetime of dynamically allocated objects
// They automatically handle memory deallocation to avoid memory leaks

// 1) unique_ptr
// Provides exclusive ownership of a resource
// Memory is automatically freed when the unique_ptr goes out of scope or is reset
// Cannot be copied, but can be moved to transfer ownership

// 2) shared_ptr
// Provides shared ownership of a resource through reference counting
// Memory is automatically freed when the last shared_ptr owning the resource is destroyed or reset
// Can be copied; all copies share ownership and contribute to the reference count

// 3) weak_ptr
// Provides a non-owning "weak" reference to a resource managed by shared_ptr
// Does not affect the reference count of the resource
// Used to break circular references and avoid memory leaks
// Must be converted to a shared_ptr using lock() to access the resource
// lock() returns a null shared_ptr if the resource has been deleted

class User{
public:
    User(){
        cout << "User created\n";
    }
    ~User(){
        cout << "User destroyed\n";
    }

    void testFunc(){
        cout << "I am a test function\n";
    }
};

int main(){

    {
        // Creating a unique_ptr to manage a User object
        // `make_unique` is preferred for exception safety and simplicity
        unique_ptr<User> sam = make_unique<User>();
        sam->testFunc();

        // Attempting to copy `unique_ptr` is not allowed and will cause a compilation error
        // unique_ptr<User> samm = sam; // NOT ALLOWED

        // Ownership can be transferred using std::move
        // unique_ptr<User> sam2 = std::move(sam); // Allowed
        // After the move, `sam` is now nullptr
    }

    {
        // Creating a shared_ptr to manage a User object
        // `make_shared` is preferred for efficiency and exception safety
        shared_ptr<User> tim = make_shared<User>();

        // Creating a weak_ptr from the shared_ptr
        weak_ptr<User> wtim = tim; // wtim observes the resource but does not affect its reference count

        // Copying shared_ptr is allowed and both copies share ownership
        shared_ptr<User> timm = tim;

        // Memory is freed when the last shared_ptr (timm, tim) is destroyed
    }

    cout << "outside code\n";

    return 0;
}