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
        int curr_sum = 0;
        for (int j = i; j < n; j++) {
            curr_sum = curr_sum + arr[i];
            if (curr_sum > max_sum) {
                max_sum = curr_sum;
            }
        }
    }
    cout << max_sum;
    return 0;
}