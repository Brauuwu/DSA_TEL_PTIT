#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> Adj[105];

int main(){
    int t; cin >> t;
    while(t--){
    	memset(Adj, 0, sizeof(Adj));
    	int V, E;
		cin >> V >> E;
		while(E--){
			int x, y; cin >> x >> y;
			Adj[x].push_back(y);
		}
		for(int i=1; i<=V; i++){
			cout << i <<": ";
			for(int x:Adj[i]) cout << x << " ";
			cout << endl;
		}
    }
    return 0;
}
