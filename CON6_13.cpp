#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		map<int, int> mp;
		int n, x; cin >> n >> x;
		int a[n];
		for(int &v:a){
			cin >> v;
			mp[v]++;
		}
		if(mp[x]) cout << mp[x];
		else cout << -1;
		cout << endl;
	}
	return 0;
}
