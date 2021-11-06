#include <iostream>
using namespace std;
void l_pap();
void pap();

int main(){
	char wybor;
	cout << "witaj w papugowej grze!: chcesz grac z losowa papuga czy z normalna? (n/l)" << endl;

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

void l_pap() 
void pap(){
	char x;
	int a = 0;
	
	cout << "papuga literowa" << endl;
	cin >> x;
		while (x != 't') {
			cout << x << endl;
			cin >> x;
			a++;
	}

	return 0;
}