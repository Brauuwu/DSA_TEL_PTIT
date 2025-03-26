#include<bits/stdc++.h>
#define ll long long
using namespace std;

int MOD = 1e9+7;

int main(){
    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
	    priority_queue<ll, vector<ll>, greater<ll>> pq;
	    while(n--){
	    	ll tmp; cin >> tmp;
	    	pq.push(tmp);
		}
		ll res = 0;
		while(pq.size() > 1){
			ll a=pq.top(); pq.pop();
			ll b=pq.top(); pq.pop();
			ll tmp= (a+b)%MOD;
			pq.push(tmp);
			res += tmp;
			res %= MOD;
		}
		cout << res << endl;
	}
    return 0;
}
