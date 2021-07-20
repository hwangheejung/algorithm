#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
	int n;
	string ans;
	cin >> n;
	stack<int> s;
	int m = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x > m) {
			while (x > m) {
				s.push(++m);
				ans += '+';
			}
			s.pop();
			ans += '-';
		}
		else {
			bool found = false;
			if (!s.empty()) {
				int top = s.top();
				s.pop();
				ans += '-';
				if (x == top) {
					found = true;
				}
			}
			if (!found) {
				cout << "NO" << '\n';
				return 0;
			}
		}	
	}
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << '\n';
	}
}