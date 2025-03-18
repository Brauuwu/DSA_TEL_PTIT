#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll Find(ll n, ll k){
	if(k%2) return n;
	return Find(n+1, k/2);
}

int main() {
    int t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        cout << Find(1, k) << endl;
    }
    return 0;
}
