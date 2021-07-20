#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
	int arr[26] = { -1,-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };
	string name;
	cin >> name;
	for (int i = 0; i < name.size(); i++) {
		if (arr[name[i] - 97] == -1) {
			arr[name[i] - 97] = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}
}
