#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int count = 0;
	for (int i = 0; i < t; i++) {
		int x,c=0;
		cin >> x;
		for (int i = 1; i <= x; i++) {
			if (x%i == 0) {
				c++;
			}
			
		}
		if (c == 2) {
			count++;
		}

	}
	cout << count << endl;
}