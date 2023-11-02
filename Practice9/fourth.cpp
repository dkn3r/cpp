#include <iostream>
#include <cstdlib>
using namespace std;

int fourth(int numbers[], int size) {
	
	cout << "Fourth task: " << endl;
	int A;
	cout << "Enter a number A: ";
	cin >> A;
	cout << "Numbers which bigger than A: ";
	for (int i = 0; i < size; i++) {
		if (numbers[i] > A) {
			cout << numbers[i] << " ";
		}
	}
	cout << endl<<endl;
	return 0;

}