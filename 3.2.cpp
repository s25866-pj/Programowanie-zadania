#include <iostream>
#include <cstdlib>
using namespace std;
void l_pap();
void pap();

int main() {
	char wybor;
	cout << "witaj w papugowej grze!: chcesz grac z losowa papuga czy z normalna? (n/l)" << endl;
	cin >> wybor;
	switch (wybor) {
	case 'n':
		pap();
		break;

	case 'l':
		l_pap();
		break;
	default:
		cout << "mamy tylko te 2 niestety :(" << endl;
	}

}

void l_pap() {
	char x;
	int liczba;
	srand(time(NULL));
	liczba = rand() % 26 + 97;
	//cout << liczba << endl;
	do {
		cin >> x;
		cout << x << endl;
	} while (int(x) != liczba);
	cout << "dokladnie ta litera!!!!" << endl;
}

void pap() {
	char x;

	cout << "papuga literowa" << endl;
	cin >> x;
	while (x != 't') {
		cout << x << endl;
		cin >> x;
	}

}
