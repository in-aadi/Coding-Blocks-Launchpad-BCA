#include <iostream>
using namespace std;

int main() {
    char ch;
    cin.get(ch);
    int characters = 0;
    while (ch != '$') {
    	characters++;
        cin.get(ch);
    }
    cout << "Characters: " << characters << endl;
    return 0;
}