#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> Adj[105];
int visited[105];

void DFS(int u){
	visited[u] = 1;
	cout << u << " ";
	for(int v:Adj[u]){
		if(!visited[v]) DFS(v);
	}
}

int main(){
    int t; cin >> t;
    while(t--){
    	memset(Adj, 0, sizeof(Adj));
        memset(visited, 0, sizeof(visited));
    	int V, E, u;
		cin >> V >> E >> u;
		while(E--){
			int x, y; cin >> x >> y;
			Adj[x].push_back(y);
		}
		DFS(u);
		cout << endl;
    }
    return 0;
}
