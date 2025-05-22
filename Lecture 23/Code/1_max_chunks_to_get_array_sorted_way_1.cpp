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

	// TC: O(N), SC: O(1)
	int max = arr[0];
	int chunks = 0;
	for (int i = 0; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
		if (max == i) {
			chunks++;
		}
	}
	cout << chunks;

	return 0;
}