#include <iostream>
using namespace std;
int main(){
	int a;
	cout << "podaj nr miesiaca:";
	cin >> a;

	switch (a) {
	case 1:
		cout << "styczen, 31 dni";
		break;
	case 2:
		cout << "luty, 28 dni ";
		break;
	case 3:
		cout << "marzec, 31 dni";
		break;
	case 4:
		cout << "kwiecien, 30 dni";
		break;
	case 5:
		cout << "maj, 31 dni";
		break;
	case 6:
		cout << "czewiec, 30 dni";
		break;
	case 7:
		cout << "lipiec, 31 dni ";
		break;
	case 8:
		cout << "sierpien, 31 dni";
		break;
	case 9:
		cout << "wrzesien, 30 dni";
		break;
	case 10:
		cout << "pazdziernik, 31 dni";
		break;
	case 11:
		cout << "listopad, 30 dni";
		break;
	case 12:
		cout << "grudzien, 31 dni";
		break;
	default:
		cout << "taki miesiac nie istnieje!"<<endl;
		break;
	}
	if (a > 0 && a < 13) {
		if (4 < a && a < 9) {
			cout << " slonecznie" << endl;
		}
		else {
			cout << " deszczowo" << endl;
		}
	}
	return 0;
}