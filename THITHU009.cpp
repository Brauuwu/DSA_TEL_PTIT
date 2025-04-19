#include<bits/stdc++.h>
#define ll long long
#define oo 1e9
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<pair<int, int>> S, T;
		int visited[n+1];
		memset(visited, 0, sizeof(visited));
		while(n--){
			int x, y;
			cin >> x >> y;
			if(!(visited[x] && visited[y])){
				S.push_back({x, y});
				visited[x] = 1;
				visited[y] = 1;
			}
			else T.push_back({x, y});
		}
		for(auto E:T){
			cout << E.first << " " << E.second << endl;
		}
	}
	return 0;
}
