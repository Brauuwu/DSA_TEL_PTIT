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
		sort(a, a+n);
		ll sum = 0;
		for(int i=0; i<n; i++){
			sum += a[i]*i;
			sum %= MOD;
		}
		cout << sum << endl;
	}
	return 0;
}
