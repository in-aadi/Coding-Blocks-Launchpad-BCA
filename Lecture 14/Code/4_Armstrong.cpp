#include<iostream>
using namespace std;

int main() {
    int n;                       
    cin >> n;
    int digits = 0;
    int n_copy = n;
    while (n > 0) {
        digits++;
        n = n / 10;
    }

    n = n_copy;
    int sum = 0;
    while (n > 0) {
        int rem = n % 10;
        int prod = 1;
        for (int i = 1; i <= digits; i++) {
            prod = prod * rem;
        }
        sum = sum + prod;
        n = n / 10;
    }

    if (sum == n_copy) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}