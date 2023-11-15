#include <iostream>
#include <cstdlib>
using namespace std;

int fiveteenth() {
	int const m = 5;
	int const n = 5;
	int numbers[m][n];
	srand(time(0));
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			numbers[i][j] = rand() % 2;
			cout << numbers[i][j] << ' ';
		}
		cout << endl;
	}
	int sumDiagonals = 0;
	for (int i = 0; i < m; i++) {
		sumDiagonals += numbers[i][i] + numbers[i][n - 1 - i];
	}
	cout << "Sum diagonals are: " << sumDiagonals << endl;
	return 0;
}