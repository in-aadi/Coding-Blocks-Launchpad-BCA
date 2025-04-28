#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << ' ';
        }
        for (int k = n - i; k >= 1; k--) {
            cout << ' ';
        }
        for (int k = n - i - 1; k >= 1; k--) {
            cout << ' ';
        }
        for (int l = i; l >= 1; l--) {
            if (l == n) {
                continue;
            }
            cout << l << ' ';
        }
        cout << endl;
    }

    return 0;
}