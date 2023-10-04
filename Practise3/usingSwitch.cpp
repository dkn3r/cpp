#include <iostream>
#include <string>

using namespace std;

int main() {
    char firstLetter;

    cout << "Enter the first letter of the country's name: ";
    cin >> firstLetter;

    string continent;
    double area;

    switch (firstLetter) {
        case 'U':
            continent = "Europe";
            area = 603500.0;
            break;
        case 'C':
            continent = "North America";
            area = 24709000.0;
            break;
        case 'J':
            continent = "Asia";
            area = 37797589.0;
            break;
        case 'A':
            continent = "Africa";
            area = 30370000.0;
            break;
        case 'S':
            continent = "South America";
            area = 17840000.0;
            break;
        case 'O':
            continent = "Australia";
            area = 7692024.0;
            break;
        case 'M':
            continent = "Antarctica";
            area = 14000000.0;
            break;
        default:
            cout << "Country not found." << endl;
            return 1;
    }

    cout << "Continent: " << continent << endl;
    cout << "Area: " << area << " sq. km" << endl;


}
