#include<iostream>
using namespace std;

/*
1 2 3 4 5 
2 2 3 4 5 
3 3 3 4 5 
4 4 4 4 5 
5 5 5 5 5
*/

int main () {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i << ' ';
		}
		for (int k = i + 1; k <= n; k++) {
			cout << k << ' ';
		}
		cout << endl;
	}
	return 0;
}