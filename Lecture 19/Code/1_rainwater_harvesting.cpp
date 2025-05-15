#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	int left_max[n];
	int max = -1;
	for (int i = 0; i < n; i++) {
		left_max[i] = max;
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	
	int right_max[n];
	max = -1;
	for (int i = n - 1; i >= 0; i--) {
		right_max[i] = max;
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		int count = 0;
		if (left_max[i] < right_max[i]) {
			count = left_max[i] - arr[i];
		} else {
			count = right_max[i] - arr[i];
		}
		if (count > 0) {
			sum = sum + count;
		}
	}
	cout << sum;
	return 0;
}