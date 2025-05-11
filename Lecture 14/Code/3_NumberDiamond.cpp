#include<iostream>
using namespace std;

/*
  1
 232
34543
 232
  1
*/

int main() {
    int n;                       // 7
    cin >> n;
    int mid = n / 2 + 1;         // 4

    for (int i = 1; i <= mid; i++) {
        for (int j = 1; j <= mid - i; j++) {
            cout << ' ';
        }
        for (int k = i; k <= 2 * i - 1; k++) {
            cout << k;
        }
        for (int l = 2 * i - 2; l >= i; l--) {
            cout << l;
        }
        cout << endl;
    }

    for (int i = mid - 1; i >= 1; i--) {
        for (int j = mid - 1; j >= i; j--) {
            cout << ' ';
        }
        for (int k = i; k <= 2 * i - 1; k++) {
            cout << k;
        }
        for (int l = 2 * i - 2; l >= i; l--) {
            cout << l;
        }
        cout << endl;

    }

    return 0;
}