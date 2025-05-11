#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        bool check = true;
        for (int j = 0; j <= n - 2 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                check = false;
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        if (check == true) {
            break;
        }
    }

    for (int i = 0; i < n; i++) {
      cout << arr[i] << ' ';
    }    
    return 0;
}
