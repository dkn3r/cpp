#include <iostream>
#include <cstdlib>
using namespace std;

int fiveteenth() {
	int const m = 3;
	int const n = 3;
	int numbers[m][n];

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			numbers[i][j] = rand() % 10;
			cout << numbers[i][j];
		}
		cout << endl;
	}
	int sumDiagonals = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j || i == 0 && j == n - 1 || i == m - 1 && j == 0) {
				sumDiagonals+=numbers[i][j];
			}
		}
	}
	cout << "Sum diagonals are: " << sumDiagonals+numbers[1][1] << endl;
	return 0;

}