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
		if ( num[i] != xx) {
			a[index] = num[i];

			xx = a[index];
			
			re(index + 1, n, m);
			
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