#include<bits/stdc++.h>
using namespace std;

int a, b, c;
char M[31][31][31];
bool visited[31][31][31];

int X[6] = {1, -1, 0, 0, 0, 0};
int Y[6] = {0, 0, 1, -1, 0, 0};
int Z[6] = {0, 0, 0, 0, 1, -1};

struct Box{
	int x, y, z;
};

bool check(int m, int n, int p){
	if(m>=0 && m<a && n>=0 && n<b && p>=0 && p<c && M[m][n][p]!='#' && !visited[m][n][p]){
		return true;
	}
	return false;
}

int BFS(Box s, Box e){
	queue<pair<Box, int>> q;
	q.push({s, 0});
	visited[s.x][s.y][s.z] = true;
	M[s.x][s.y][s.z] = '#';
	while(!q.empty()){
		pair<Box, int> current = q.front();
		q.pop();
		if(current.first.x==e.x && current.first.y==e.y && current.first.z==e.z) return current.second;
		for(int i=0; i<6; i++){
			int m = current.first.x + X[i];
			int n = current.first.y + Y[i];
			int p = current.first.z + Z[i];
			if(check(m, n, p)){
				q.push({{m, n, p}, current.second+1});
				visited[m][n][p] = true;
			}
		}
	}
	return -1;
}

int main(){
	int t; cin >> t;
	while(t--){
		memset(visited, false, sizeof(visited));
		cin >> a >> b >> c;
		Box s, e;
		for(int i=0; i<a; i++){
			for(int j=0; j<b; j++){
				for(int k=0; k<c; k++){
					cin >> M[i][j][k];
					if(M[i][j][k] == 'S') s={i, j, k};
					if(M[i][j][k] == 'E') e={i, j, k};
				}
			}
		}
		cout << BFS(s, e) << endl;
	}
    return 0;
}
