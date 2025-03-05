#include<bits/stdc++.h>
#define ll long long
using namespace std;

int MOD = 1e9+7;

ll powMOD(ll n, ll k){
	ll res = 1;
	n %= MOD;
	while(k>0){
		if(k&1) res = (res*n)%MOD;
		n = (n*n)%MOD;
		k /= 2;
	}
	return res;
}

int main() {
	int t; cin >> t;
	while(t--) {
		ll n, k; cin>>n>>k;
		cout << powMOD(n, k) << endl;
	}
}
