#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> Adj[100];
int visited[100][100], maxlen;

void DFS(int u, int cnt){
	maxlen = max(maxlen, cnt);
	for(int v:Adj[u]){
		if(!visited[u][v] && !visited[v][u]){
			visited[u][v] = visited[v][u] = 1;
			DFS(v, cnt+1);
			visited[u][v] = visited[v][u] = 0;
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		for(int i=0; i<100; i++) Adj[i].clear();
		maxlen = 0;
		int V, E;
		cin >> V >> E;
		while(E--){
			int u, v;
			cin >> u >> v;
			Adj[u].push_back(v);
			Adj[v].push_back(u);
		}
		for(int i=0; i<V; i++){
			memset(visited, 0, sizeof(visited));
			DFS(i, 0);
		}
		cout << maxlen << endl;
	}
    return 0;
}
