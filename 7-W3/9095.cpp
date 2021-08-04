#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int x;
		cin >> x;
		int*n = new int[x + 1];
		n[1] = 1;
		n[2] = 2;
		n[3] = 4;
		n[4] = 7;
		for (int i = 5; i <= x; i++) {
			n[i] = n[i - 1] + n[i - 2] + n[i - 3];
		}
		cout << n[x] << '\n';
	}

}