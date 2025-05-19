#include <iostream>
using namespace std;

int main() {
    // array input
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }    
    int max_sum = arr[0];
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int start = i, end = j;
            int curr_sum = 0;
            for (int k = start; k <= end; k++) {
                curr_sum = curr_sum + arr[k];
            }
            if (curr_sum > max_sum) {
                max_sum = curr_sum;
            }
        }
    }
    cout << max_sum;
    return 0;
}