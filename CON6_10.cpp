#include<bits/stdc++.h>
#define ll long long
using namespace std;

int MOD = 1e9+7;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x:a) cin >> x;
		set<int> se;
		for(int x:a){
			while(x>0){
				se.insert(x%10);
				x /= 10;
			}
		}
		for(int x:se) cout << x << " ";
		cout << endl;
	}
	return 0;
}
