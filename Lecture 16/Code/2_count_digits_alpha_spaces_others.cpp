#include <iostream>
using namespace std;

int main() {
    char ch;
    cin.get(ch);
    int space = 0, digits = 0, alpha = 0, other = 0;
    while (ch != '$') {
        if (ch == ' ') {
            space++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else if (ch >= 'a' && ch <= 'z') {
            alpha++;
        } else if (ch >= 'A' && ch <= 'Z') {
            alpha++;
        } else {
            other++;
        }
        cin.get(ch);
    }
    cout << "Digits: " << digits << endl;
    cout << "Spaces: " << space << endl;
    cout << "Alphabets: " << alpha << endl;
    cout << "Other: " << other << endl;
    return 0;
}