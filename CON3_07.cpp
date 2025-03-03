#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        ll sum = 0;
        vector<ll> a(n), b(n);
        for(ll &x:a) cin >> x;
        for(ll &x:b) cin >> x;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<ll>());
        for(int i=0; i<n; i++){
        	sum += a[i]*b[i];
		}
		cout << sum << endl;
    }
    return 0;
}
