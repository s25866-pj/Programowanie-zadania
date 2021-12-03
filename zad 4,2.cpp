#include <iostream>

using namespace std;

int main()
{
    int n, c, w, maxw;
    int maxc = 0;
    cout << "podaj ilosc liczb:" << endl;
    cin >> n;
    int * tab = new int[n];
    cout << "podaj liczby:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> tab[i];
    }
    cout << "twoje liczby to:"<<endl;
    for (int i = 0; i < n; i++) {
        cout<<tab[i]<<" ";
    }
    

    for (int i = 0; i < n; i++){
        w = tab[i];
        c = 0;

        for (int j = 0; j < n; j++) {
            if (w == tab[j]) {
                c++;
            }
        }
        if (c > maxc)
        {
            maxc = c;
            maxw = w;
        }
    }
    cout << endl<<"liczba " << maxw << " wystepuje " << maxc << " razy."<<endl;
    delete[] tab;

    return 0;
}
