#include <iostream>
#include <cmath> // for abs()
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int target;
		cin >> target;

		int min_diff = 1000001;
		int n1, n2; 

		for (int i = 0; i < n; i++) {
			int a = arr[i];
			for (int j = i + 1; j < n; j++) {
				int b = arr[j];
				if (a + b == target) {
					if (a < b) {
						int c = a;
						a = b;
						b = c;
					}
					if (a - b < min_diff) {
						min_diff = a - b;
						n1 = b;
						n2 = a;
					}
				}
			}
		}

		cout << "Deepak should buy roses whose prices are " << n1 << " and " << n2 << '.' << endl;
	}
	return 0;
}
