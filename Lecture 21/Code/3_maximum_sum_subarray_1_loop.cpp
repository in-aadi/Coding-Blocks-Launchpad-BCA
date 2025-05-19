#include <iostream>
using namespace std;

// Kadane's Algorithm

int main() {
    // array input
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }    
    int max_sum = arr[0];
    int curr_sum = 0;
    for (int i = 0; i < n; i++) {
        curr_sum = curr_sum + arr[i];
        if (curr_sum > max_sum) {
            max_sum = curr_sum;
        }
        if (curr_sum < 0) {
            curr_sum = 0;
        }
    }
    cout << max_sum;
    return 0;
}