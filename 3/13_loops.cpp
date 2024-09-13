#include <iostream>
using std:: cout;
using std:: endl;

int main(){

    int my_numbers[] = {4, 5, 6, 7, 8, 9, 0};

    int i = 0;

    //-----------------------------WHILE----------------------------------

    // while(i < 7){
    //     if (i == 3)
    //     {
    //         cout << "skip this one" << endl;
    //         i++;
    //         continue;
    //     }
    //     if (i == 5)
    //     {
    //         break;
    //     }        
    //     cout << "Current number is: " << my_numbers[i] << endl;
    //     i++;
    // }

    //-------------------------DO WHILE----------------------------------

    // do{
    //     cout << "Current number is: " << my_numbers[i] << endl;
    //     i++;
    // } while (i < 7);

    //---------------------------FOR-------------------------------------

    // int my_nums[] = {2, 3, 4, 5, 6};

    // for(int i = 0; i < 5; i++){
    //     // cout << i << endl;
    //     cout << my_nums[i] << endl;
    // }
    // cout << "Get a break" << endl;
    
    // for (int i:my_nums)
    // {
    //  cout << i << endl;   
    // }

    //---------------------------Extras---------------------------------

    char my_string[] = "sarvesh";
    char my_name[] = {'s', 'a', 'r', 'v', 'e', 's', 'h', 0};
    // printf("My name is: %s\n", my_string);
    printf("My name is: %s\n", my_name);

    cout << "take a break\n";

    // for(int i = 0; my_string[i] != 0; i++){
    //     cout << "Character is: " << my_string[i] << endl;
    // }

    // for(int i = 0; my_name[i] != 0; i++){
    //     cout << "Character is: " << my_name[i] << endl;
    // }

    for(int i = 0; my_name[i]; i++){
        cout << "Character is: " << my_name[i] << endl;
    }
    
    cout << "take a break part 2\n";
    for(char *cp = my_name; *cp != 0; cp++){
        cout << "Character is: " << *cp << endl;
    }

    cout << "take a break part 3\n";
    for(char i:my_name){
        if(i == 0) break;
        cout << "Char is: " << i << endl;
    }

    cout << "outside of loop" << endl;

    return 0;
}