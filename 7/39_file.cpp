#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main() {

    // Define constant file names for the original and edited files
    static const char * originalfile = "originalFile.txt";
    static const char * editedfile = "editedFile.txt";

    // Uncomment the following lines to create the original file and rename it

    // FILE * fh = fopen(originalfile, "w"); // Open 'originalFile.txt' for writing (creates the file)
    // fclose(fh); // Close the file handle



    // Uncomment the following line to rename the original file to 'editedFile.txt'

    // rename(originalfile, editedfile); // Rename 'originalFile.txt' to 'editedFile.txt'



    // Remove (delete) the 'editedFile.txt' file
    remove(editedfile); // Deletes 'editedFile.txt' if it exists

    return 0;
}