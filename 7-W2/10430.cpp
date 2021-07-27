#include<iostream>
using namespace std;

int main() {
	int x, y, z;
	cin >> x >> y >> z;
	cout << (x + y) % z << '\n';
	cout << ((x%z) + (y%z)) % z << '\n';
	cout << ((x*y) % z) << '\n';
	cout << ((x%z)*(y%z)) % z;
}