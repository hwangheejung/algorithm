#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
	stack<int> s;

	string bra;
	cin >> bra;
	int count = 0;
	for (int i = 0; i < bra.size(); i++)
	{
		if (bra[i] == '(') {
			s.push(i);
		}
		else {
			if (s.top()+1==i) {
				s.pop();
				count += s.size();
			}
			else {
				s.pop();
				count += 1;
			}
			
		}
	}
	cout << count << endl;
}