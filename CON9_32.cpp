#include<bits/stdc++.h>
using namespace std;

int n, m;
int a[505][505], visited[505][505];
int X[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int Y[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int check(int x, int y){
	if(0<=x && x<n && 0<=y && y<m && !visited[x][y] && a[x][y]) return 1;
	return 0;
}

void DFS(int a, int b){
	visited[a][b] = 1;
	for(int i=0; i<8; i++){
		int x = a+X[i];
		int y = b+Y[i];
		if(check(x, y)) DFS(x, y);
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		memset(visited, 0, sizeof(visited));
		cin >> n >> m;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin >> a[i][j];
			}
		}
		int cnt = 0;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(a[i][j] && !visited[i][j]){
					cnt++;
					DFS(i, j);
				}
			}
		}
		cout << cnt << endl;
	}
    return 0;
}
