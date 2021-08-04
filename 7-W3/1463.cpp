#include<iostream>
using namespace std;



int main() {

	int x;
	cin >> x;

	int *n=new int[x+1];
	 
	
	n[1] = 0;
	n[2] = 1;
	n[3] = 1;
	for (int i = 4; i <= x; i++) {
		n[i] = n[i - 1] + 1;
		if (i % 2 == 0 && n[i] > n[i / 2] + 1) {
			n[i] = n[i / 2] + 1;
		}
		 if (i % 3 == 0 && n[i] > n[i / 3] + 1) {
			n[i] = n[i / 3] + 1;
		}
	}
	cout << n[x] << endl;
}