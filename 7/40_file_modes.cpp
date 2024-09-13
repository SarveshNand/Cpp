#include <iostream>
#include <string>
#include <cstdint>

using std::cout;
using std::endl;
using std::string;

constexpr int maxbuffer = 1024; // Define the maximum buffer size for reading from the file

int main() {

    const char * filename = "mythisfile.txt"; // Define the file name
    const char * information = "lorem ipsum dolor sit amet"; // Define the information to write to the file


// Uncomment the following lines to write to the file

    // FILE * fh = fopen(filename, "w"); // Open the file for writing (creates the file or truncates it if it already exists)
    // FILE * fh = fopen(filename, "a"); // Open the file for appending (creates the file if it does not exist)



// Write 'information' to the file 50 times

    // for (int i = 0; i < 50; ++i) {
    //     fputs(information, fh); // Write the 'information' string to the file
    // }
    // fclose(fh); // Close the file handle after writing



    char buf[maxbuffer]; // Buffer to hold data read from the file

    FILE * fh = fopen(filename, "r"); // Open the file for reading (fails if the file does not exist)
    if (fh == nullptr) {
        // Check if the file was successfully opened
        cout << "Error: Could not open file for reading\n"; // Error message if file opening fails
        return 1; // Exit the program with an error code
    }

// Read from the file line by line and print to standard output

    while (fgets(buf, maxbuffer, fh)) {
        // fgets reads up to 'maxbuffer - 1' characters or until a newline or EOF is found
        fputs(buf, stdout); // Output the buffer contents to the standard output (console)
    }

    fclose(fh); // Close the file handle after reading

    return 0;
}