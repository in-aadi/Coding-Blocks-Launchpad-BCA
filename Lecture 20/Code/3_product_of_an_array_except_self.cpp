#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        long int prod = 1;
        for (int j = 0; j < n; j++) {
            if (i == j) {
                continue;
            }
            prod = prod * arr[j];
        }
        cout << prod << ' ';
    }
    return 0;
}