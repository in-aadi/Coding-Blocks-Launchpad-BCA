#include <iostream>
using namespace std;

int main() {
    char ch;
    cin.get(ch);

    int characters = 0;

    int words = 0, lines = 1;
    bool isWord = false;

    while (ch != '$') {
        characters++;
        if (ch == '\n' || ch == ' ') {
            if (ch == '\n') {
                ++lines;
            }
            if (isWord == true) {
                words++;
            }
            isWord = false;
        }
        else {
            isWord = true;
        }
        cin.get(ch); 
    }
    if (isWord == true) {
        words++;
    }

    cout << "Characters: " << characters << endl;
    cout << "Words: " << words << endl;

    return 0;
}

