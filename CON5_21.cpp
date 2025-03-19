#include<bits/stdc++.h>
#define ll long long
using namespace std;

int MOD = 1e9+7;

int main() {
    int t; cin >> t;
    while(t--){
    	int n, k;
		cin >> n >> k;
    	int a[n];
    	for(int &x:a) cin >> x;
    	ll dp[k+1] = {0};
    	dp[0] = 1;
    	for(int i=1; i<=k; i++){
    		for(int x:a){
    			if(i >= x){
    				dp[i] += dp[i-x];
    				dp[i] %= MOD;
				}
			}
		}
		cout << dp[k] << endl;
	}
    return 0;
}
