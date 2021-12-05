#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "podaj rozmiar tablicy"<<endl;
    cin >> size;
    int h_size = size / 2;
    int* tab=new int [size];
    for (int i = 0; i < size; i++) {
        cin >> tab[i];
    }
    for (int i = 0; i < h_size; i++) {
        cout << endl;
        for (int j = 0; j < 2; j++) {
            if (j % 2 == 0) {
                cout << tab[i];
             }
            else {
                cout <<"   |    "<<tab[h_size + i];
            }

        }

    }
    cout << endl << "zamiana"<<endl;
    for (int i = 0; i < h_size; i++) {
        swap(tab[i], tab[h_size + i]);
    }
    cout << "tablica po zamianie:" << endl;
    for (int i = 0; i < h_size; i++) {
        cout << endl;
        for (int j = 0; j < 2; j++) {
            if (j % 2 == 0) {
                cout << tab[i];
            }
            else {
                cout << "   |    " << tab[h_size + i];
            }

        }

    }
    return 0;
}