#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int mp[1000] = {0};
		for(char c:s) mp[c]++;
		int cnt = 0;
		for(int i='a'; i<='z'; i++){
			cnt = max(cnt, mp[i]);
		}
		if(s.size() % 2 == 0){
			if(cnt > s.size()/2) cout << -1;
			else cout << 1;
		}
		else{
			if(cnt > s.size()/2+1) cout << -1;
			else cout << 1;
		}
		cout << endl;
	}
	return 0;
}
