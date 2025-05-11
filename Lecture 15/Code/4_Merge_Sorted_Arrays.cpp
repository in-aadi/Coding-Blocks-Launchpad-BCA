#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr1[n];
    for (int i =0; i < n; i++) {
        cin >> arr1[i];
    }
    int m;
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    int arr3[n + m];

    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            i++;
            k++;
        } else {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }

    while (j < m) {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
    while (i < n) {
        arr3[k] = arr1[i];
        i++;
        k++;
    }


    return 0;
}
