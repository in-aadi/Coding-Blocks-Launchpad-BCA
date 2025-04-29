#include<iostream>
using namespace std;

/*
1
11
111
1001
11111
100001
*/

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) {
                cout << 1;
            } else if (i % 2 != 0) {
                cout << 1;
            } else {
                cout << 0;
            }
        }
        cout << endl;
    }

    return 0;
}