#include <iostream>
using namespace std;

int main(){
	int P;
	cout << "Enter P: ";
	cin >> P;

	int R;
	cout << "Enter R: ";
	cin >> R;
	
	int T;
	cout << "Enter T: ";
	cin >> T;

	int SI = (P * R * T) / 100;
	cout << "Simple Interest: " << SI;

	return 0;	
}