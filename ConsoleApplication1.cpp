#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 10; i++) {
        cout << endl;
        for (int j = 0; j < 10; j++) {
            switch (j) {
            case 0 :
                cout << i<<" ";
                break;
            case 1:
                cout << i + i<<" ";
                break;
            case 2:
                cout << i * i <<" ";
                break;
            case 3:
                cout << i + j << " ";
                break;
            case 4:
                cout << i - j << " ";
            default:
                cout << "0";
           }
        }
    }
}
