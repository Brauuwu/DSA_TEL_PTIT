#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> Adj[105];
int visited[105], parent[105];

void DFS(int u){
	visited[u] = 1;
	for(int v:Adj[u]){
		if(!visited[v]){
			parent[v] = u;
			DFS(v);
		}
	}
}

void Find(int s, int t){
	if(!parent[t]){
		cout << -1;
		return;
	}
	vector<int> Path;
	Path.push_back(t);
	int u = parent[t];
	while(u != s){
		Path.push_back(u);
		u = parent[u];
	}
	Path.push_back(s);
	reverse(Path.begin(), Path.end());
	for(int x:Path) cout << x << " ";
}

int main(){
    int t; cin >> t;
    while(t--){
    	memset(Adj, 0, sizeof(Adj));
        memset(visited, 0, sizeof(visited));
        memset(parent, 0, sizeof(parent));
    	int V, E, s, t;
		cin >> V >> E >> s >> t;
		while(E--){
			int x, y; cin >> x >> y;
			Adj[x].push_back(y);
			Adj[y].push_back(x);
		}
		DFS(s);
		Find(s, t);
		cout << endl;
    }
    return 0;
}
