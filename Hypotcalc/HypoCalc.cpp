#include <iostream>
#include <cmath>
using namespace std;

int main() {
	/*Buatlah sebuah program untuk menghitung sisi miring segiƟga siku– siku.Input berupa 2 sisi siku – siku, misal sisi a dan b.*/

	double a;
	double b;
	char g = '\\';

	cout << "Hitung sisi miring" << endl;

	//malas pake setw sefill tanpa loop
	cout << "\n " << endl;
	cout << "\t  |" << g << endl;
	cout << "\t  | " << g << endl;
	cout << "\t  |  " << g << endl;
	cout << "\t  |   " << g << endl;
	cout << "\ta " << "|    " << g << " c" << endl;
	cout << "\t  |     " << g << endl;
	cout << "\t  |      " << g << endl;
	cout << "\t  ---------" << endl;
	cout << "\t\tb" << endl;
	cout << "\n " << endl;

	cout << "Masukan sisi a dan b: ";
	cin >> a >> b;
	double c = sqrt(pow(a, 2) + pow(b, 2));
	cout << "Sisi miring c       : " << c << endl;
	system("pause");
	return 0;
}