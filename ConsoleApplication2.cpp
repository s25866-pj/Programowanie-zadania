#include <iostream>
using namespace std;
void suma(float x, float y);
void roznica(float x, float y);
void iloczyn(float x, float y);
void iloraz(float x, float y);
int main()
{
	float x, y;
	int wybor;
	cout << "kalkulator" << endl;

	cout << "Podaj liczbe x: ";
	cin >> x;
	cout<< endl << "podaj liczbe y: ";
	cin >> y;
	cout << "podano " << x << " i " << y<<endl;
	cout << "co zrobic?:" << endl << "1-suma" << endl << "2-roznica" << endl << "3-iloczyn" << endl << "4-iloraz" << endl <<"0-wyjscie"<< endl;
	cin >> wybor;
	while (wybor != 0)
	{
		cin >> wybor;
		switch (wybor) {
			case 1:
				suma(x, y);
			break;

			case 2:
				roznica(x, y);
			break;

			case 3:
				iloczyn(x, y);
			break;

			case 4:
				iloraz(x, y);
			break;

			default:
				cout << "brak takiego dzialania!" << endl;
		}
}
	cout << "do widzenia!" << endl;
	return 0;
}
void suma(float x, float y) {
	cout << "suma: " << x + y << endl;
}
void roznica(float x, float y) {
	cout << "roznica: " << x - y << endl;
}
void iloczyn(float x, float y) {
	cout << "iloczyn: " << x * y << endl;
}
void iloraz(float x, float y) {
	cout << "iloraz: " << x / y << endl;
}