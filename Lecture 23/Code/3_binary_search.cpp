#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// array input
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);

	int target;
	cin >> target;

	int low  = 0, high = n - 1;
	bool check = false;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] == target) {
			check = true;
			break;
		} else if (arr[mid] < target) {
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}
	if (check == true) {
		cout << "Found";
	} else {
		cout << "Not found";
	}

	return 0;
}