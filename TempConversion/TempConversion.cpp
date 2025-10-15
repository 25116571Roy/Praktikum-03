#include <iostream>
#include <cmath>
using namespace std;

int main() {
	/*Buatkalh program untuk konversi suhu dari Celsius ke Reamur dan Fahrenheit*/
	cout << "Konversi Suhu\r\n";
	cout << endl;

	double Celcius;
	cout << "\tInput Celsius:\t\t" << char(248) << "C\b\b\b\b\b\b\b";
	cin >> Celcius;

	double Reamur = Celcius * 4 / 5;
	double Fahrenheit = (Celcius * 9 / 5) + 32;
	cout << "\tKonversi     :" << endl;
	cout << "\t\t\t   " << Reamur << "\t" << char(248) << "R" << endl;
	cout << "\t\t\t   " << Fahrenheit << "\t" << char(248) << "F" << endl;

}