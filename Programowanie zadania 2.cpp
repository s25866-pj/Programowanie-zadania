
#include<iostream>
using namespace std;
int main() {
	int a, b;
	//a
	cout << "zadanie a" << endl;
	cout << "podaj liczbe a i b ze spacja: ";
	cin >> a >> b;
	cout << a << " " << b;
	
		
			//b
			cout << endl << "zadanie b" << endl;
			cout << endl;
			for (int i = 0; i < a; i++) {
				cout << "*";
			}

			//c
			cout << endl << "zadanie c" << endl;
			for (int i = 0; i < b; i++) {
				cout << "*" << endl;
			}

			//d
			cout << endl << "zadanie d" << endl;
			for (int i = 0; i < a; i++) {
				cout << endl;
				for (int j = 0; j < b; j++) {
					cout << "*";
				}
			}
			//e
			cout << endl << "zadnie e" << endl;
			for (int i = 0; i < a; i++) {
				cout << endl;
				for (int j = 0; j < b; j++) {
					if (i == 0 || i == a - 1 || j == 0 || j == b - 1) {
						cout << "*";
					}
					else {
						cout << " ";
					}
				}
			}
			//f
			cout << endl << "zadnie f" << endl;
			cout << "trojkat o rozmiarze " << a << endl;
			for (int i = 1; i < a+1; i++) {
				cout << endl;
				for (int j = 0; j < i; j++) {
					cout << "*";
				}



	//g
	cout << endl << "zadnie g" << endl;
	cout << "odwrotny trojkat o rozmiarze " << a << endl;
	for (int i = a; i > 0; i--) {
		cout << endl;
		for (int x = 0; x < a-i; x++) {
			
			cout << " ";
		}
		for (int j = 0; j < i; j++) {
			cout << "*";
		}

		


	}
	return 0;
}

