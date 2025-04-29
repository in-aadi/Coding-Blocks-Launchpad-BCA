#include<iostream>
using namespace std;

/*
1 2 3 4 5
1 2 3 4 * 
1 2 3 * * *
1 2 * * * * *
1 * * * * * * *
*/

int main () {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) {
            cout << j << ' ';
        }
        for (int k = 1; k <= i - 1; k ++) {
            cout << "* ";
        }
        for (int l = 1; l <= i - 2; l++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}