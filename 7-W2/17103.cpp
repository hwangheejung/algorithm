#include<iostream>
using namespace std;
const int MAX = 1000000;
int prime[MAX];
int pn;
bool check[MAX + 1];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	for (int i = 2; i <= MAX; i++) {
		if (check[i] == false) {
			prime[pn++] = i;
			for (int j = i + i; j <= MAX; j += i) {
				check[j] = 1;
			}
		}
	}
	int t;
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		int count = 0;
		int n;
			cin >> n;

			for (int i = 0; i < pn; i++) {
				if (n - prime[i] >= 2 && prime[i] <= n - prime[i]) {
					if (check[n - prime[i]] == false) {
						count++;

					}
				}
				else{
					break;
				
			}

		}
		cout << count << endl;
	}
}