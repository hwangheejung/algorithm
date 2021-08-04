#include<iostream>
#include<algorithm>
using namespace std;

int d[1001];
int a[1001];

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		d[i] = 1000 * 10000;
	}
	d[0] = 0;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			d[i] = min(d[i], d[i - j] + a[j]);
		}

	}
	cout << d[n] << endl;
	return 0;
}