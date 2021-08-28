#include<iostream>
#include<stack>
#include<queue>
#include<vector>
using namespace std;


int N, M, V;
int matrix[1001][1001];
bool check[1001];
queue<int> q;
void reset() {
	for (int i = 1; i <= N; i++) {
		check[i] = false;
	}
}
void dfs(int x) {
	check[x] = true;
	cout << x << " ";
	for (int i = 1; i <=N; i++) {
		if (check[i] == false&&matrix[x][i]==1) {
			dfs(i);
		}
	}

}

void bfs(int x) {
	
	check[x] = true;
	q.push(x);
	cout << x << " ";
	while (!q.empty()) {
		x = q.front();
		q.pop();
		for (int i = 1; i <= N; i++) {
			if (check[i] == false && matrix[x][i] == 1) {
				q.push(i);
				check[i] = true;
				cout << i << " ";
			}
		}
	}
}
int main() {
	cin >> N >> M >> V;
	for (int i = 0; i < M; i++) {
		int x, y;
		cin >> x >> y;
		matrix[x][y] = matrix[y][x] = 1;
	}
	
	dfs(V);
	cout << "\n";

	reset();

	bfs(V);
}