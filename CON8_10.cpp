#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		queue<pair<int, int>> q;
		q.push({n, 0});
		set<int> visited;
		visited.insert(n);
		while(!q.empty()){
			int current = q.front().first;
			int steps = q.front().second;
			q.pop();
			if(current == 1){
				cout << steps << endl;
				break;
			}
			if(!visited.count(current - 1)){
				visited.insert(current - 1);
				q.push({current-1, steps+1});
			}
			for(int i=2; i*i<=current; i++){
				if(current%i==0 && !visited.count(current/i)){
					visited.insert(current/i);
					q.push({current/i, steps+1});
				}
			}
		}
	}
    return 0;
}
