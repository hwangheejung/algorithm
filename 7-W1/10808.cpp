#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
	int arr[26] = { 0 };
	string name;
	cin >> name;
	for (int i = 0; i < name.size(); i++) {
		arr[name[i] - 97]+=1;
	}
	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}
}
