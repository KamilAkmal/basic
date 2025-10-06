#include <iostream>
using namespace std;

int main() {
    char str[100];
    int i, choice;
    cout << "Enter a string: ";
    cin >> str;

    cout << "Choose an option:\n1. Encrypt\n2. Decrypt\n";
    cin >> choice;

    switch (choice) {
        case 1:  // Encrypt
            for (i = 0; str[i] != '\0'; i++) {
                str[i] = str[i] + 2;  // key = 2
            }
            cout << "Encrypted string: " << str << endl;
            break;

        case 2:  // Decrypt
            for (i = 0; str[i] != '\0'; i++) {
                str[i] = str[i] - 2;  // key = 2
            }
            cout << "Decrypted string: " << str << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }
    return 0;
}
