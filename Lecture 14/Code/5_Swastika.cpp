#include<iostream>
using namespace std;

/*
* ***
* *  
*****
  * *
*** *
*/

int main() {
    int n;                       
    cin >> n;
    int mid = n / 2 + 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == mid) {
                cout << '*';
            } else if (j == mid) {
                cout << '*';
            } else if (i == n && j <= mid) {
                cout << '*';
            } else if (i == 1 && j >= mid) {
                cout << '*';
            } else if (j == n && i >= mid) {
                cout << '*';
            } else if (j == 1 && i <= mid) {
                cout << '*';
            } else {
                cout << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}