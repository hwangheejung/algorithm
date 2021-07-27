#include<iostream>
using namespace std;
int gcd(int a, int b) {
	if (b == 0) return a;
	else {
		return gcd(b, a%b);
	}
}
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int x, y;
		cin >> x >> y;
		cout << (x*(y / gcd(x, y))) << endl;
	}
}