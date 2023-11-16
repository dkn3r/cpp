#include <iostream>
#include <iomanip>
using namespace std;

struct Date {
	int start_time[2];
	int end_time[2];
	int result_time[2];
};

int main() {
	Date dates;
	start_time: cout << "Enter start time (hours/minutes): ";
	for (int i = 0; i < 2; ++i) {
		cin >> dates.start_time[i];
	}
	if (dates.start_time[0] > 23 || dates.start_time[0] < 0 || dates.start_time[1] > 60 || dates.start_time[1] < 0) {
		cout << "Invalid data!" << endl;
		goto start_time;
	}

	end_time: cout << "Enter end time (hours/minutes): ";
	for (int i = 0; i < 2; ++i) {
		cin >> dates.end_time[i];
	}
	if (dates.end_time[0] > 23 || dates.end_time[0] < 0 || dates.end_time[1] > 60 || dates.end_time[1] < 0) {
		cout << "Invalid data!" << endl;
		goto end_time;
	}

	dates.result_time[0] = dates.end_time[0] - dates.start_time[0];
	dates.result_time[1] = dates.end_time[1] - dates.start_time[1];

	if (dates.result_time[0] < 0) {
		dates.result_time[0] = 24 + dates.end_time[0] - dates.start_time[0];
	}
	if (dates.result_time[1] < 0) {
		dates.result_time[0]--;
		dates.result_time[1] = 60 + dates.end_time[1] - dates.start_time[1];
	}

	cout << setw(2) << setfill('0') << dates.result_time[0] << ":" << setw(2) << setfill('0') << dates.result_time[1];

}