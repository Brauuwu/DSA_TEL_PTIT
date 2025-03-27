#include<bits/stdc++.h>
#define ll long long
#define oo 1e9
using namespace std;

vector<int> Adj[1001];
int visited[1001];

void DFS(int u){
	visited[u] = 1;
	for(int v:Adj[u]){
		if(!visited[v]){
			DFS(v);
		}
	}
}

int check(int x, int y){
	memset(visited, 0, sizeof(visited));
	DFS(x);
	if(visited[y]) return 1;
	return 0;
}

int main(){
    int t; cin >> t;
    while(t--){
    	int n, m;
    	cin >> n >> m;
    	while(m--){
    		int u, v;
    		cin >> u >> v;
    		Adj[u].push_back(v);
    		Adj[v].push_back(u);
		}
		int Q; cin >> Q;
		while(Q--){
			int x, y;
			cin >> x >> y;
			if(check(x, y)) cout << "YES\n";
			else cout << "NO\n";
		}
	}
    return 0;
}
