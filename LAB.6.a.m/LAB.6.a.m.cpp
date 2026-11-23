#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {

	//Zad.1

		/*int a = 7;
		int b = 2;
		cout << "a/b: " << a / b << endl;
		cout << "static_cast<double>(a) / b: " << static_cast<double>(a) / b << endl;
		cout << "static_cast<double>(a / b): " << static_cast<double>(a / b) << endl;
	}*/

	//Zad.2		Podczas konwersji program ucina wszystko po przecinku, nie wa¿ne jaka wartoœæ

	/*double a = 3.99;
	double b = -3.99;
	int y = a;
	int x = b;
	cout << "Zwykle przypisanie 3.99: " << y << endl;
	cout << "static_cast<int>(3.99): " << static_cast<int>(a) << endl;
	cout << "Zwykle przypisanie 3.99: " << x << endl;
	cout << "static_cast<int>(-3.99): " << static_cast<int>(b) << endl;
}*/

//Zad.3

	/*char a = 'A';
	int b = a;
	cout << "char " << a << " --> int " << b << endl;
	int d = 66;
	char c = d;
	cout << "int " << d << " --> char " << c << endl;
}*/

//Zad.4

	/*int a, b, c;
	c = 0;
	b = 0;
	cout << "Podaj ilosc liczb: ";
	cin >> a;
	if (a <= 0) {
		cout << "Niepoprawna ilosc liczb :c" << endl;
		return 0;
	}
	cout << "Podaj liczbe calkowita:\n";
	for (int i = 0; i < a; i++) {
		cin >> b;
		c += b;
	}
	cout << "Srednia bez rzutowania " << c / a << endl;
	cout << "Srednia z rzutowaniem " << static_cast<double>(c) / a << endl;
}*/

//Zad.5

	/*int a, b;
	cout << "Ile zadan: ";
	cin >> a;
	if (a <= 0) {
		cout << "Niepoprawna ilosc zadan :c" << endl;
		return 0;
	}
	else {
		cout << "Ile zadan zostalo zrobionych: ";
		cin >> b;
		if (b < 0 || b > a) {
			cout << "Niepoprawna ilosc zrobionych zadan :c" << endl;
			return 0;
		}
		else if (b == 0) {
			cout << "Nie zrobiles zadnych zadan :c" << endl;
			return 0;
		}
		else {
			cout << "Procent zrobionych zadan: " << static_cast<double>(b) / a * 100 << "%" << endl;
		}
	}
}*/

	//Zad.6
	
