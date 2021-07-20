#include<iostream>
#include<stack>
#include<string>
using namespace std;


int main() {
	stack<char>s1, s2;
	string a;
	cin >> a;
	int n = a.size();
	
	for (int i = 0; i < n; i++) {
		s1.push(a[i]);
	}
	int t;
	cin >> t;
	

	while(t--){
		char com;
		cin >> com;
		if (com == 'P') {
			char x;
			cin >> x;
			s1.push(x);

		}
		else if (com == 'L') {
			if (!s1.empty()) {
				
				s2.push(s1.top());
				s1.pop();
			}
		}
		else if (com == 'D') {
			if (!s2.empty()) {
				s1.push(s2.top());
				s2.pop();
			}
		}
		else if (com == 'B') {
			if (!s1.empty()) {

				s1.pop();
			}
		}
	}

	while(!s1.empty()) {
		s2.push(s1.top());
		s1.pop();
	}
	while(!s2.empty()){
	  
		cout << s2.top();
		s2.pop();
	}
	cout << "\n";
	return 0;
	
	
}