#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	const int size = 5;
	int count_odd = 0;
	int count_even = 0;
	int matrix[size][size] = { };
	int *ptr = &matrix[0][0];
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			*ptr = rand() % 10;
			if (*ptr % 2 == 0) {
				count_even++;
			}
			else {
				count_odd++;
			}
			ptr++;
			cout.width(4);
			cout << matrix[i][j];
		}
		cout << endl;
		
	}

	ptr = &matrix[0][0]; 
	cout << "Elemets of the main diagonal: ";
	for (int i = 0; i < size; i++) {
		cout << *ptr << " ";
		ptr += size + 1;
	}
	cout << endl;

	ptr = &matrix[0][size - 1];
	cout << "Elements of the side diagonal: ";
	for (int i = 0; i < size; i++) {
		cout << *ptr << " ";
		ptr += size - 1;
	}
	cout << endl;

	cout << "Even numbers in the array: ";
	cout << count_even<<endl;

	cout << "Odd numbers in the array: ";
	cout << count_odd << endl;

	return 0;
}