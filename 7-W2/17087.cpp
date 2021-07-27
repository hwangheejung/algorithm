#include<iostream>
using namespace std;
long long gcd(long long x, long long y) {
	if (y == 0) return x;
	else {
		return gcd(y, x % y);
	}

}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, x,a, arr[100001];
	cin >> n>>x;
	
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (x - a > 0) arr[i] = x - a;
		else
			arr[i] = a - x;
	}
	int gc = arr[0];
	for(int i=1;i<n;i++){
		gc = gcd(arr[i], gc);

	}
	cout << gc << endl;
		
	

}