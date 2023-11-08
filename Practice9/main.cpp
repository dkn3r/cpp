#include <iostream>

using namespace std;
int third(int numbers[], int size);
int fourth(int numbers[], int size);
int fiveth(int numbers[], int size);
int sixth(int numbers[], int size);
int main() {
	
	const int size = 5;
	int numbers[size] = {9,0,1,0,3};
//	for (int i = 0; i < size; i++) {
//		numbers[i] = rand() % 10;
//	}
	for (int i = 0; i < size; i++) {
		cout << numbers[i] << " ";
	}
	cout << endl << endl;

	third(numbers, size);
	fourth(numbers, size);
	fiveth(numbers, size);
	sixth(numbers, size);
	return 0;
}