#include <iostream>
#include <string>
using namespace std; 

int main() {
    // Declare and initialize the array
    string elements[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    int size = sizeof(elements) / sizeof(elements[0]);

    // Iterate through each element of the array
    for (int i = 0; i < size; ++i) {
        // Check if the element starts with the letter 'B'
        if (elements[i][0] == 'B') {
            // Output the element
            cout << elements[i] << endl;
        }
    }

    return 0;
}