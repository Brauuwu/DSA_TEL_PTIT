#include<bits/stdc++.h>
using namespace std;

int V, E;
int visited[1005][1005];

int Euler(){
	for(int i=1; i<=V; i++){
		int x=0, y=0;
		for(int j=1; j<=V; j++){
			if(visited[i][j]) x++;
			if(visited[j][i]) y++;
		}
		if(x!=y) return 0;
	}
	return 1;
}

int main(){
	int t; cin >> t;
	while(t--){
		memset(visited, 0, sizeof(visited));
		cin >> V >> E;
		while(E--){
			int u, v;
			cin >> u >> v;
			visited[u][v] = 1;
		}
		cout << Euler() << endl;
	}
    return 0;
}
