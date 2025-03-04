#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> Adj[105];
int visited[105];

void DFS(int u){
	visited[u] = 1;
	for(int v:Adj[u]){
		if(!visited[v]){
			DFS(v);
		}
	}
}

int Connected_Component(int V){
	int cnt = 0;
	for(int i=1; i<=V; i++){
		if(!visited[i]){
			cnt++;
			DFS(i);
		}
	}
	return cnt;
}

int main(){
    int t; cin >> t;
    while(t--){
    	memset(Adj, 0, sizeof(Adj));
        memset(visited, 0, sizeof(visited));
    	int V, E, s, t;
		cin >> V >> E;
		while(E--){
			int x, y; cin >> x >> y;
			Adj[x].push_back(y);
			Adj[y].push_back(x);
		}
		cout << Connected_Component(V) << endl;
    }
    return 0;
}
