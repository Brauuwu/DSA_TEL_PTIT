#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> Adj[105];
int visited[105], parent[105];

void BFS(int u){
	queue<int> q;
	q.push(u);
	visited[u] = 1;
	while(!q.empty()){
		int s = q.front(); q.pop();
		for(int t:Adj[s]){
			if(!visited[t]){
				parent[t] = s;
				visited[t] = 1;
				q.push(t);
			}
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
		}
		BFS(s);
		Find(s, t);
		cout << endl;
    }
    return 0;
}
