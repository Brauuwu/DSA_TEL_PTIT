#include<bits/stdc++.h>
#define ll long long
#define oo 1e9
using namespace std;

vector<int> Adj[105];
int visited[105], parent[105];

void DFS(int u, int& flag){
	visited[u] = 1;
	for(int v:Adj[u]){
		if(!visited[v]){
			parent[v] = u;
			DFS(v, flag);
		}
		else if(parent[u] != v) flag = 1;
	}
}

int check(int V){
	int flag = 0;
	for(int i=1; i<=V; i++){
		memset(visited, 0, sizeof(visited));
		memset(parent, 0, sizeof(parent));
		DFS(i, flag);
		if(flag) return 1;
	}
	return 0;
}

int main(){
	int t; cin >> t;
	while(t--){
		for(int i=0; i<105; i++) Adj[i].clear();
		int V, E;
		cin >> V >> E;
		while(E--){
			int x, y;
			cin >> x >> y;
			Adj[x].push_back(y);
			Adj[y].push_back(x);
		}
		if(check(V)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
