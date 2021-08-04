#include<iostream>
using namespace std;

int main() {
	int x;
	cin >> x;
	int* n = new int[x + 1];
	n[1] = 1;
	n[2] = 3;
	for (int i = 3; i <= x; i++) {
		n[i] = n[i - 1]%10007 + (n[i - 2] * 2)%10007;
	}
	cout << n[x]%10007 << "\n";
}