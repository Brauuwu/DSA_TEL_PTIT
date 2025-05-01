#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> Adj[1001];

int Euler(int V){
	int cnt = 0;
	for(int i=1; i<=V; i++){
		if(Adj[i].size() & 1) cnt++;
	}
	if(cnt==2) return 1;
	if(cnt==0) return 2;
	return 0;
}

int main(){
	int t; cin >> t;
	while(t--){
		for(int i=1; i<=1000; i++) Adj[i].clear();
		int V, E;
		cin >> V >> E;
		while(E--){
			int u, v;
			cin >> u >> v;
			Adj[u].push_back(v);
			Adj[v].push_back(u);
		}
		cout << Euler(V) << endl;
	}
    return 0;
}
