#include <iostream>
using namespace std;

// way 1: TC = O(N^2), SC = O(1)

int main() {
    // array input
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    } 

    int left_max = arr[0];
    int ans;

    for (int i = 0; i < n; i++) {
        if (left_max < arr[i]) {
            left_max = arr[i];
        }
        bool correctPartition = true;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < left_max) {
                correctPartition = false;
                break;
            }
        }
        if (correctPartition == true) {
            ans = i + 1;
            break;
        }

    }
    cout << ans;

    return 0;
}