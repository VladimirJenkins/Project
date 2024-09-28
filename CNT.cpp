#include <iostream>
#include <vector>
using namespace std;
int main() {
	int L, R;
	vector <int> socantim;
	cout << "Nhập giá trị đầu: ";
	do {
		cin >> L;
	} while ( L < 1 );
	cout << "Nhập giá trị cuối: ";
	do {
		cin >> R;
	} while (L >= R);
	for (int j = L;j < R;j++) {
		int u = L % 10;
		int y = L / 10;
		int z = u + y ;
		if ( z == 2 || z == 3 || z == 5 || z == 7) {
			socantim.push_back(L);
		}
		L++;
	}
	for (int k : socantim) {
		cout << k << endl;
	}
	return 0;
}
