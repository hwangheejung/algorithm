#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int q = 0, re = 0;
	int temp = n;
	if (n > 1) {
		for (int i = 2; i <= n; i++) {
			re = temp % i;
			q = temp / i;
			while (q != 0 && re == 0) {
				cout << i << endl;
				temp = temp / i;
				re = temp % i;
				q = temp / i;
			}
		}
	}
}