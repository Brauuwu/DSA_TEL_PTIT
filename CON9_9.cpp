#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> Adj[105];
int visited[105];

void BFS(int u){
	queue<int> q;
	q.push(u);
	visited[u] = 1;
	cout << u << " ";
	while(!q.empty()){
		int s = q.front(); q.pop();
		for(int t:Adj[s]){
			if(!visited[t]){
				visited[t] = 1;
				cout << t << " ";
				q.push(t);
			}
		}
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
		BFS(u);
		cout << endl;
    }
    return 0;
}
