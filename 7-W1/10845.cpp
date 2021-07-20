#include<iostream>
#include<string>

using namespace std;

int main() {
	int t;
	cin >> t;
	int arr[100000];
	int front=0, end = 0;
	for (int i = 0; i < t; i++) {
		string name;
		cin >> name;
		if (name == "push") {
			int x;
			cin >> x;
			arr[end] = x;
			end++;
		}
		else if (name == "front") {
			if (end - front == 0) {
				cout << "-1" << endl;
			}
			else {
				cout << arr[front] << endl;
			}
		}
		else if (name == "pop") {
			if (end-front == 0) {
				cout << "-1" << endl;

			}
			else {
				cout << arr[front] << endl;
				front++;
			}
		}
		else if (name == "size") {
			cout << end - front << endl;
		}
		else if (name == "back") {
			if (end - front == 0) {
				cout << "-1" << endl;
			}
			else {
				cout << arr[end - 1] << endl;
			}
		}
		else if (name == "empty") {
			if (end - front == 0) {
				cout << "1" << endl;
			}
			else {
				cout << "0" << endl;
			}
		}

	}
}