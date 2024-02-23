#include <iostream>
#include <string>
using namespace std;
int main() {
	string name;
	double fahrenheit;
	double celsius;
	int choice;
	cout << "Please enter your name: " << endl;
	getline(cin, name);
	cout << "Welcome " << name << " to the Temperature Converter Application" << endl;
    while (true) {
        cout << "Please type 1 for Celsius to Fahrenheit  conversion." << endl;
        cout << "Type 2 for Fahrenheit to Celsius conversion." << endl;
        cout << "Or type 3 to exit the program" << endl;
        cin >> choice;
        if (choice == 3) {
            break;
        }
        else if (choice == 1) {
            cout << "Please enter your temperature in Celsius" << endl;
            cin >> celsius;
            cout << "\nComputing..." << endl;
            fahrenheit = celsius * (9.0 / 5) + 32;
            cout << "The temperature in Fahrenheit is " << fahrenheit << endl;
        }
        else if (choice == 2) {
            cout << "Please enter your temperature in Fahrenheit" << endl;
            cin >> fahrenheit;
            cout << "\nComputing..." << endl;
            celsius = (fahrenheit - 32) * (5.0 / 9);
            cout << "The temperature in Celsius is " << celsius << endl;
        }
        else
            cout << "That is not an option." << endl;
        cout << " " << endl;
    }
    return 0;
}