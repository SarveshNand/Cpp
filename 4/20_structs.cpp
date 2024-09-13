#include <iostream>
using std::cout;
using std::endl;

struct User{

    const int uId;
    // Now remember we are putting constant on the pointer so it is not fixing the value but it's reference so we can change the value but the      address will be same.
    const char *name;
    const char *email;
    int course_count;
};

int main(){

    User mickey = {001, "mickey", "mickey@cartoon.com", 2};
    User donald = {002, "donald", "donald@cartoon.com", 3};

    User * d = &donald;

    cout << mickey.email << endl;

    cout << donald.email << endl;
    donald.course_count = 4;
    cout << donald.course_count << endl;

    // donald.uId = 221;

    donald.email = "ddonaldy@gmail.com";
    cout << donald.email << endl;

    d->course_count = 12;
    cout << donald.course_count << endl;

    return 0;
}