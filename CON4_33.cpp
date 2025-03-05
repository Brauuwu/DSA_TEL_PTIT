#include<bits/stdc++.h>
#define ll long long
using namespace std;

int MOD = 1e9+7;

ll Rev(ll n){
	ll res = 0;
	while(n>0){
		res = res*10 + n%10;
		n /= 10;
	}
	return res;
}

ll powMOD(ll n, ll r){
	ll res = 1;
	n %= MOD;
	while(r>0){
		if(r&1) res = (res*n)%MOD;
		n = (n*n)%MOD;
		r /= 2;
	}
	return res;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n; cin >> n;
        ll r = Rev(n);
        cout << powMOD(n, r) << endl;
    }
    return 0;
}
