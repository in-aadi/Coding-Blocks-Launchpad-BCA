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
	int sum_ele = 0;
	int sum_idx = 0;
	int chunks = 0;
	for (int i = 0; i < n; i++) {
		sum_ele = sum_ele + arr[i];
		sum_idx = sum_idx + i;
		if (sum_ele == sum_idx) {
			chunks++;
		}
	}
	cout << chunks;

	return 0;
}