#include<bits/stdc++.h>
using namespace std;

int cmp(pair<int,int> a, pair<int, int> b){
	if(a.second > b.second) return 1;
	if(a.second == b.second && a.first < b.first) return 1;
	return 0;
}

int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		int n; cin >> n;
		int a[n];
		map<int, int> cnt;
		for(int &x:a){
			cin >> x;
			cnt[x]++;
		}
		vector<pair<int, int>> v;
		for(int x:a) v.push_back({x, cnt[x]});
		sort(v.begin(), v.end(), cmp);
		for(auto x:v) cout << x.first << " ";
		cout << endl;
	}
    return 0;
}
