#include<iostream>
#include<cmath>
using namespace std;

int main () {
    int n;
    cin >> n;
    int target;
    cin >> target;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int total_combinations = pow(2, n);
    int count = 0;

    for (int combination = 0; combination < total_combinations; combination++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if ((combination & (1 << i)) == 0) {
                sum = sum + arr[i];
            } else {
                sum = sum - arr[i];
            } 
        }
        if (sum == target) {
            count++;
        }
    }
    cout << count;

    return 0;
}