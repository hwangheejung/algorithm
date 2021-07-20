#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		string name;
		getline(cin, name);
		name += '\n';
		stack<char> s;
		for (char ch : name) {
			if (ch == ' ' || ch == '\n') {
				while (!s.empty()) {
					cout << s.top();
					s.pop();
				}
				cout << ch;
			}
			else {
				s.push(ch);
			}
		}
	}
	return 0;
}