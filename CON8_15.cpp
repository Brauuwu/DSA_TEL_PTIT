#include<bits/stdc++.h>
#define ll long long
#define oo 1e9
using namespace std;

int a[101][101], visited[101][101];

struct Point{
	int x, y, step;
};

int BFS(int m, int n){
	queue<Point> q;
	q.push({1, 1, 0});
	visited[1][1] = 1;
	while(!q.empty()){
		int x = q.front().x;
		int y = q.front().y;
		int step = q.front().step;
		q.pop();
		if(x == m && y == n) return step;
		if(y+a[x][y] <= n && !visited[x][y+a[x][y]]){
			q.push({x, y+a[x][y], step+1});
			visited[x][y+a[x][y]] = 1;
		}
		if(x+a[x][y] <= m && !visited[x+a[x][y]][y]){
			q.push({x+a[x][y], y, step+1});
			visited[x+a[x][y]][y] = 1;
		}
	}
	return -1;
}

int main(){
    int t; cin >> t;
    while(t--){
    	int m, n;
    	cin >> m >> n;
    	for(int i=1; i<=m; i++){
    		for(int j=1; j<=n; j++){
    			cin >> a[i][j];
			}
		}
		memset(visited, 0, sizeof(visited));
    	cout << BFS(m, n) << endl;
	}
    return 0;
}
