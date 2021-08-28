#include<iostream>
#include<stack>
#include<queue>
#include<vector>
using namespace std;


int N, M;
int matrix[1001][1001];
bool check[1001];

void dfs(int x) {
	check[x] = true;
	for (int i = 1; i <= N; i++) {
		if (check[i] == false && matrix[x][i] == 1) {
			dfs(i);
		}
	}

}

int main() {
	cin >> N >> M ;
	for (int i = 0; i < M; i++) {
		int x, y;
		cin >> x >> y;
		matrix[x][y] = matrix[y][x] = 1;
	}
	int count = 0;
	for (int i = 1; i <= N; i++) {
		if (check[i] == false) {
			dfs(i);
			count++;
		}
	}
	cout << count<<"\n";

	
}