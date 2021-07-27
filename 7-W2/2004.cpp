#include<iostream>
using namespace std;

int main() {
	long long x,y;
	cin >> x>>y;
	long long five = 0,two=0;

	for (long long i = 5; i <= x; i*=5) {
		five += x / i;
	}
	for (long long i = 5; i <= y; i *= 5) {
		five -= y / i;
	}
	for (long long i = 5; i <= x - y; i *= 5) {
		five -= (x-y) / i;
	}
	for (long long i = 2; i <= x; i *= 2) {
		two += x / i;
	}
	for (long long i = 2; i <= y; i *= 2) {
		two -= y / i;
	}
	for (long long i = 2; i <= x - y; i *= 2) {
		two -= (x - y) / i;
	}
	if (two < five) {
		cout << two << endl;
	}
	else {
		cout << five << endl;
	}
}