#include <iostream>
#include <math.h>
using namespace std;
void delta_0(float b, float a);
void delta_p(float b, float a, float p_delta);
void delta_m(float b, float a, float p_delta);
int main()
{
    char odp;
    float a, b, c, delta, memo;
    float p_delta;
    cout << "Witaj w programie do rozwiazania rownania kwadratowego!"<<endl;
    do {
        cout << "podaj liczby A, B i C po spacji:" << endl;
        cin >> a >> b >> c;
        cout << "czy twoje rownanie wyglada tak?:(y/n)" << endl;
        cout << a << "x^2+" << b << "x+" << c << endl;
        cin >> odp;
    } while (odp == 'n');

    delta = b * b;

  //  cout <<"b*b =" << delta << endl;
    memo = 4 * a * c;
 //   cout << "4*a*c=" << memo << endl;
    delta = delta - memo;

    p_delta = sqrt(delta);
   cout<< endl<<endl<<endl;

    if (delta == 0) {
        delta_0(a, b);
    }
    else if (delta > 0) {
        delta_p(b,a,p_delta);
    }
    else {
        cout << "nie ma takiego" << endl;
    }
}

void delta_0(float b, float a) {
   // cout <<"b=" << b << " , " <<"a=" <<a << endl;
    cout << "delta rowna 0" << endl;
    float wynik = -b / 2 * a;

    cout <<"x=" << wynik << endl;
}

void delta_p(float b, float a, float p_delta) {
    float x_1, x_2;
    cout << "delta wieksza niz 0" << endl;
    float d;

    d = a * 2;

    x_1 = -1 * b;
    x_1 = x_1 - p_delta;
    x_1 = x_1 / d;
    cout << x_1 << endl;

    x_2 = -1 * b;
    x_2 = x_2 + p_delta;
    x_2 = x_2 / d;
    cout << x_2 << endl;
}