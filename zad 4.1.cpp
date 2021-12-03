#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "szukanie najwiekszej liczyby"<<endl;
    cout << "podaj wielkosc tablicy:" << endl;
    cin >> size;
    int max;//zmienna do najwiekszej liczby
    int x;//zmienna do zapiasnia indeksu danej liczby
    int* tab = new int [size];
    for (int i = 0; i < size; i++) {
        cout << i+1 << " : ";
        cin >> tab[i];
    }
    max = tab[0];
    x = 0;
    cout << endl << endl;
    for (int i = 0; i < size; i++) {
        if (tab[i] > max) {
            max = tab[i];
            x = i;
        }
    }
    cout << "najwieksza liczba jest "<< max <<" ktora jest "<< x + 1 <<" liczba (indeks nr:" <<x<<")" << endl;
}
