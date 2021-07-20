#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int fre[1000000];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	vector<int> a(t);
	vector<int> nge(t);
	
	for (int i = 0; i < t; i++) {
		cin >> a[i];
		fre[a[i]] += 1;
	}
	stack<int> s;
	s.push(0);
	for (int i = 1; i < t; i++) {
		if (s.empty()) {
			s.push(i);
		}
		while (!s.empty() && fre[a[s.top()]] < fre[a[i]]) {

			nge[s.top()] = a[i];
			s.pop();
		}
		s.push(i);
	}
	while (!s.empty()) {
		nge[s.top()] = -1;
		s.pop();
	}
	for (int i = 0; i < t; i++) {
		cout << nge[i] << " ";
	}


}