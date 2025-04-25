#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> Adj[1005];
bool visited[1005];
bool vertex[1005];

void DFS(int u){
	visited[u] = true;
	for(int v:Adj[u]){
		if(!visited[v]){
			DFS(v);
		}
	}
}

int Connected(int V){
	int cnt = 0;
	for(int i=1; i<=V; i++){
		if(!visited[i]){
			cnt++;
			DFS(i);
		}
	}
	return cnt==1;
}

int main(){
	int t; cin >> t;
	while(t--){
		memset(visited, 0, sizeof(visited));
		memset(vertex, 0, sizeof(vertex));
		int V, E;
		cin >> V;
		for(int i=1; i<=V; i++) Adj[i].clear();
		E = V-1;
		while(E--){
			int u, v;
			cin >> u >> v;
			Adj[u].push_back(v);
			Adj[v].push_back(u);
		}
		if(Connected(V)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
