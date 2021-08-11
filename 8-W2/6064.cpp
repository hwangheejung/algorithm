#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int M, N, x, y;
		cin >> M >> N >> x >> y;
		x -= 1;
		y -= 1;
		bool ok = false;
		for (int k = x; k < (N*M); k += M) {
			if (k%N == y) {
				cout << k + 1 << endl;
				ok = true;
				break;
			}
		}

		if (!ok) cout << "-1" << endl;


	}
	return 0;
}

