#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n,a,max,index;
	cout << "podaj ilosc elementow wektora:" << endl;
	//a
	cin >> n;
	cout << endl;
	vector<int>vec;
	//b
		for (int i = 0; i < n; i++) {
			cin >> a;
			vec.push_back(a);
		}
		max = vec[0];
		index = 0;
		cout << endl << "twoja lista:" << endl; 
		for (auto y : vec) {
			cout << y << " ";
		}
			for (int i = 0; i < n;i++) {
				for (int j = i + 1; j < n; j++) {
					if (vec[i] > max) {
						max = vec[i];
						index = i;
					}
				}
			}
		cout <<endl<<endl<< "najwiekszy element to: " << max << " i ma index nr: " << index;
	return 0;
}
