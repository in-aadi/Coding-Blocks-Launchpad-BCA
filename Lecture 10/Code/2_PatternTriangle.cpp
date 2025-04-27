#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int l = 1; l <= n - i; l++) {
            cout << '\t';
        }
        int temp = i;
        for (int j = 1; j <= i; j++) {
            cout << temp << '\t';
            temp++;
        }
        temp = temp - 2;
        for (int k = 1; k <= i - 1; k++) {
            cout << temp << '\t';
            temp--;
        }
        cout << endl;
    }
    
    return 0;
}