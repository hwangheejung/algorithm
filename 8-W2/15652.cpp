#include<iostream>
using namespace std;
bool c[10]; int a[10];
void re(int index, int n, int m) {
	if (index == m) {
		for (int i = 0; i < m; i++) {
			cout << a[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (c[i]) continue;
		for (int j = 1; j < i; j++) {
			c[j] = true;
		}
		a[index] = i;
		re(index + 1, n, m);
		for (int k = 1; k < 10; k++) {
			c[k] = false;
		}
	}

}
int main() {
	int n, m;
	cin >> n >> m;

	re(0, n, m);


}