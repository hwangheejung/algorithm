#include <iostream>
#include <stack>
#include <string>
using namespace std;

double arr[26];
string s;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout << fixed;
	cout.precision(2);
	int num;
	cin >> num;
	cin >> s;
	for (int i = 0; i < num; i++) cin >> arr[i];
	stack<double> st;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '*' || s[i] == '/' || s[i] == '+' || s[i] == '-') {
			double a = st.top();
			st.pop();
			double b = st.top();
			st.pop();
			if (s[i] == '*') st.push(a*b);
			else if (s[i] == '/') st.push(b / a);
			else if (s[i] == '+') st.push(b + a);
			else if (s[i] == '-') st.push(b - a);
		}
		else st.push(arr[s[i] - 65]);
	}
	cout << st.top();
	return 0;
}
