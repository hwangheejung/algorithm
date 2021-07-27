#include<iostream>
#include<vector>
using namespace std;
int gcd(int x,int y) {
	if (y == 0) return x;
	else {
		return gcd(y, x % y);
	}

}
int main() {
	int t,x,a[100];
	cin >> t;
	long long sum = 0;
	for (int i = 0; i < t; i++) {
		
		cin >> x;
	
		for (int j = 0; j < x; j++) {
			cin >> a[j];

		}
		for (int k = 0; k < x-1; k++) {
			for (int l = k + 1; l < x; l++) {
				sum += gcd(a[k], a[l]);
			}
		}
		cout << sum << endl;
		sum = 0;
	}

}