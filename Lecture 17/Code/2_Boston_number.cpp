#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int sum = 0;
	for (int i = n; i > 0; i = i / 10) {
		int rem = i % 10;
		sum = sum + rem;
	}
	// factors
	int i = 2;
	int n_copy = n; 
	int sum2 = 0;
	while (n > 1) {
		if (n % i == 0) {
			// sum of digits of prime factor
			int digits_sum = 0;
			for (int k = i; k > 0; k = k / 10) {
				int rem = k % 10;
				digits_sum = digits_sum + rem;
			}

			sum2 = sum2 + digits_sum;
			n = n / i;
		} else {
			i++;
		}
		
	}
	if (sum == sum2) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}