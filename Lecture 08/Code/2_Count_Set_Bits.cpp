#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0, num = 1;
    while (num <= n) {
        if ((n & num) != 0) {
            count++;
        } 
        num = num << 1;
    }
    cout << count;
    return 0;   
}