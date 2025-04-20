#include<bits/stdc++.h>
#define State vector<int>
using namespace std;

State RL(State s){
	int tmp = s[0];
	s[0] = s[3];
	s[3] = s[4];
	s[4] = s[1];
	s[1] = tmp;
	return s;
}

State RR(State s){
	int tmp = s[1];
	s[1] = s[4];
	s[4] = s[5];
	s[5] = s[2];
	s[2] = tmp;
	return s;
}

int main(){
	int t; cin >> t;
	while(t--){
		State start(6), goal(6);
		for(int &x:start) cin >> x;
		for(int &x:goal) cin >> x;
		queue<pair<State, int>> q;
		set<State> visited;
		q.push({start, 0});
		visited.insert(start);
		while(!q.empty()){
			State current = q.front().first;
			int steps = q.front().second;
			q.pop();
			if(current == goal){
				cout << steps << endl;
				break;
			}
			State left = RL(current);
			State right = RR(current);
			if(!visited.count(left)){
				visited.insert(left);
				q.push({left, steps+1});
			}
			if(!visited.count(right)){
				visited.insert(right);
				q.push({right, steps+1});
			}
		}
	}
    return 0;
}
