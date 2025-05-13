#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int target;
	cin >> target;

	for (int i = 0; i < n; i++) {
		int a = arr[i];
		for (int j = i + 1; j < n; j++) {
			int b = arr[j];
			for (int k = j + 1; k < n; k++) {
				int c = arr[k];
				if (a + b + c == target) {
					cout << a << ", " << b << " and " << c << endl;
				}
			}
		}
	}
	return 0;
}