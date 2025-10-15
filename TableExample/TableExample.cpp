#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << setw(5) << "No." << setw(25) << "Item" << setw(10) << "Price" << endl;
	cout << "-----------------------------------------" << endl;
	cout << setw(5) << 1 << setw(25) << "Apple" << setw(10) << "$1.00" << endl;
	cout << setw(5) << 2 << setw(25) << "Banana" << setw(10) << "$0.50" << endl;
	cout << setw(5) << 3 << setw(25) << "Cherry" << setw(10) << "$2.00" << endl;
	cout << setw(5) << 4 << setw(25) << "Date" << setw(10) << "$3.00" << endl;
	cout << "-----------------------------------------" << endl;

	system("pause");
	return 0;
}