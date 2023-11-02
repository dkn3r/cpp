#include <iostream>
#include <cstdlib>
using namespace std;

int sixth(int numbers[], int size) {
	cout << "Sixth task: " << endl;
	for (int i = 0; i < size; i++) {
		if (numbers[i] == 0) {
			cout <<"The first index where the element equals zero: "<< i<<endl;
			return 0;
		}
	}
	cout << "There are no zero!";
	return 0;
}