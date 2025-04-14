#include <iostream>
using namespace std;

int main(){
	int n = 190;
	if (n > 30 && n < 50) {
		cout << "Bike";
	}
	else if (n > 100 && n < 150) {
		cout << "Kurkure";
	}
	else if (n > 200 && n < 400) {
		cout << "MacBook";
	}
	else if (n > 400 && n > 500) {
		cout << "Car";
	}
	else {
		cout << "Happy Birthday";
	}
	return 0;	
}