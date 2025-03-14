#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int k; string s;
		cin >> k >> s;
		ll sum=0;
		priority_queue<int> pq;
		int mp[100] = {0};
		for(char c:s) mp[c]++;
		for(int i='A'; i<='Z'; i++){
			pq.push(mp[i]);
		}
		while(!pq.empty() && k--){
			int x = pq.top();
			pq.pop();
			if(x>1) pq.push(x-1);
		}
		while(!pq.empty()){
			int x = pq.top();
			sum += 1ll*x*x;
			pq.pop();
		}
		cout << sum << endl;
	}
	return 0;
}
