#include<bits/stdc++.h>
using namespace std;
int main() {
    // array input
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // find point of change
    int change = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i - 1] < arr[i]) {
            change = i - 1;
            break;
        }
    }

    // if no point of change is found
    if (change == -1) {
        // reverse the entire array -> next permutation of {3, 2, 1} will be {1, 2, 3}
        for (int i = n - 1; i >= 0; i--) {
            cout << arr[i] << ' ';
        }
        return 0;
    }

    // swap point of change with a number just greater than it
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] > arr[change]) {
            // swap
            int temp = arr[i];
            arr[i] = arr[change];
            arr[change] = temp;
            break;
        }
    }

    // print till change
    for (int i = 0; i <= change; i++) {
        cout << arr[i] << ' ';
    }
    // reverse print remaining array
    for (int i = n - 1; i > change; i--) {
        cout << arr[i] << ' ';
    }

    return 0;
}