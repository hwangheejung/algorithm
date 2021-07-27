#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a;
	string first[8] = { "" ,"1", "10", "11", "100", "101", "110", "111" };
	string other[8] = { "000", "001", "010", "011", "100", "101", "110", "111" };
	cin >> a;
	cout << first[a[0] - '0'];
	for (int i = 1; i < a.size(); i++) {
		cout << other[a[i] - '0'];
	}
	if (a == "0") {
		cout << 0 << '\n';
	}
}


