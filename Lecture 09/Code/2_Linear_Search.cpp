#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cin >> x;

    bool check = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            check = true;
            break;
        }
    }

    if (check == false) {
        cout << "Not found";
    } else {
        cout << "Found";
    }

    return 0;   
}