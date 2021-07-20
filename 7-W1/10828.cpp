#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	int arr[10000];
	int size = 0;
	cin >> n;
	string name;
	for (int i = 0; i < n; i++) {
		cin >> name;
		int x;
		if (name == "push") {
			cin >> x;
			arr[size] = x;
			size++;
		}
		else if (name == "top")
		{
			if (size == 0) {
				cout << "-1" << endl;
			}
			else {
				cout << arr[size - 1] << endl;
			}
		}
		else if (name == "pop") {
			if (size == 0) {
				cout << "-1" << endl;
			}
			else {
				cout << arr[size - 1] << endl;
				arr[size - 1] = 0;
				size--;

			}
		}
		else if (name == "size") {
			cout << size << endl;
		}
		else if (name == "empty") {
			if (size == 0) {
				cout << "1" << endl;
			}
			else{
				cout << "0" << endl;
			}
		}
	}
}