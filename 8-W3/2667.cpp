#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int n;
char map[26][26];
bool check[26][26];

vector<int> v;
int dx[4] = { 0,1,0,-1 };
int dy[4] = {1,0,-1,0 };

int cnt ;

void dfs(int x, int y) {
	if (check[y][x]) return;

	cnt++;
	check[y][x] = true;


	for (int i = 0; i < 4; i++) {
		int nx = dx[i] + x;
		int ny = dy[i] + y;
		if (map[ny][nx] == '1') dfs(nx, ny);
	

	}

}

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> map[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (map[i][j] == '1' && check[i][j] == 0)
			{
				cnt = 0;
				dfs(j,i);
				v.push_back(cnt);
				
			}
		}
	}
	sort(v.begin(), v.end());
	cout << v.size() << '\n';

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}

}