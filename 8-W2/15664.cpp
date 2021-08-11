#include<iostream>
#include<algorithm>
using namespace std;
bool c[8]; int a[8]; int num[8];
void re(int index, int n, int m) {
	if (index == m) {
		for (int i = 0; i < m; i++) {
			cout << a[i] << " ";
		}
		cout << "\n";
		return;
	}
	int xx = 0;
	for (int i = 0; i < n; i++) {
		if (!c[i] && num[i] != xx) {
			a[index] = num[i];
		
			xx = a[index];
			for (int j = 0; j <= i; j++) {
				c[j] = true;
			}
			re(index + 1, n, m);
			for (int k = 0; k < 8; k++) {
				c[k] = false;
			}
		}
	}

}
int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	sort(num, num + n);

	re(0, n, m);


}