#include <iostream>
using namespace std;

// way 2: TC = O(N), SC = O(N)

int main() {
    // array input
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }    
    
    // right minimum array
    int right_min[n];
    int min = arr[n - 1];
    for (int i = n - 1; i >= 0; i--) {
        if (min > arr[i]) {
            min = arr[i];
        }
        arr[i] = min;
    }

    int left_max = arr[0];
    int ans;

    for (int i = 0; i < n; i++) {
        if (left_max < arr[i]) {
            left_max = arr[i];
        }
        
        if (right_min[i + 1] >= left_max) {
            ans = i + 1;
            break;
        }
    }
    cout << ans;

    return 0;
}