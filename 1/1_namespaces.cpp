#include <iostream>

namespace first {
    int x  = 1;
}
namespace second{
    int x  = 2;
}

int main(){
    // using namespace std;
    using std:: cout;
    using std:: string;

    // Namespace = provides a solution for preventing name conflicts in large projects.
    //             Each entity needs a unique name. A namespace allows for identically
    //             named entities as long as the namespaces are different.

    int x = 0;

    std:: cout << '\n' << x << '\n';
    std:: cout << first:: x << '\n';
    std:: cout << second:: x << '\n';

    return 0;
}