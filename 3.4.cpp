#include <iostream>
using namespace std;
int main()
{
int size;
	cout << "podaj rozmiar tojkata pascala: " << endl;
	cin >> size;
	int a = size;
	int** tab = new int*[size];
	//deklarujemy wielkość tablicy
	for (int a = 0; a < size; a++) {
		tab[a] = new int[a + 1];
	}
	for (int i = 0; i < size; i++) {
		cout << endl;
		for (int j = 0; j < i + 1; j++) {
			if (j == 0 || j == i) {
				tab[i][j] = 1;
				cout << " " << tab[i][j]<<" ";
			}
			else {
				tab[i][j] = tab[i - 1][j - 1] + tab[i - 1][j];
				cout << " " << tab[i][j]<<" ";
			}
		}

	}
	for (int a = 0; a < size; a++) {
		delete[] tab[a];
	}
}
