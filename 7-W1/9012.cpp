#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
	int t;
	cin >> t;
	string str;
	for (int i = 0; i < t; i++) {
		stack<char> s;
		cin >> str;
		int count = 0;
		for (int j = 0; j < str.size(); j++) {
			if (str[j] == '(') {
				s.push(str[j]);
		
			}
			else {
				
				if (!s.empty()) {
					s.pop();
					
				}
				else {
					count--;
				}
			}
			
		}
		if (count != 0) {
			cout << "NO" << endl;
		}
		else {
			if (s.empty()) {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
	}
}
