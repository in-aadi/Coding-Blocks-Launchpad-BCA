#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int square_root = -1;
	for (int i = 1; i <= n; i++) {
		if (i * i == n) {
			square_root = i;
			break;
		} else if (i * i > n) {
			break;
		}
	}
	if (square_root == -1) {
		cout << "No square root found";
	} else {
		cout << "Square root: " << square_root;
	}
	return 0;	
}