#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declare variables to store the input strings and the result
    string str1, str2, result;

    // Loop to take input and concatenate strings 3 times
    for (int i = 0; i < 3; i++) {
        // Prompt the user to enter the first string
        cout << "Enter the first string: ";
        cin >> str1;

        // Prompt the user to enter the second string
        cout << "Enter the second string: ";
        cin >> str2;

        // Concatenate the two strings
        result = str1 + str2;

        // Print the concatenated result
        cout << "Resulting string: " << result << endl;
    }

    return 0;
}
