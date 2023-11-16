#include <iostream>
using namespace std;

struct Date {
	int hours;
	int minutes;
	int end_time;
};

int main() {
	Date dates;
	enter_hours: cout << "Enter hours: ";
	cin >> dates.hours;
	//checking
	if (dates.hours > 24 || dates.hours < 0) {
		cout << "Invalid data!"<<endl;
		goto enter_hours;
	}
		

	enter_minutes: cout << "Enter minutes: ";
	cin >> dates.minutes;
	//checking
	if (dates.minutes > 60 || dates.minutes < 0) {
		cout << "Invalid data!" << endl;
		goto enter_minutes;
	}


	enter_end_time: cout << "Enter the time (in minutes): ";
	cin >> dates.end_time;
	


	dates.hours += dates.end_time/60;
	if (dates.hours > 24) {
		dates.hours %= 24;
	}
	if (dates.end_time % 60 == 0) {
		result: cout << dates.hours << ":" << dates.minutes;
	}
	else {
		dates.minutes += dates.end_time % 60;
		if (dates.minutes > 60) {
			dates.hours += 1;
			dates.minutes -= 60;
			
		}
		goto result;
	}

	return 0;
}