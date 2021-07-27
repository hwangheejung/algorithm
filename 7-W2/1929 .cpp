#include<iostream>
using namespace std;
int n, m;
bool arr[1000001] = { 0, };
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	arr[0] = 1;
	arr[1] = 1;
	cin >> n >> m;
	for (int i = 2; i*i <= m; i++) {
		if (arr[i] == 0) {
			for (int j = i * i; j <= m; j += i) {
				arr[j] = 1;
			}
		}
	}
	for (int i = n; i <= m; i++) {
		if (arr[i] == 0) {
			cout << i << '\n';
		}
	}
}