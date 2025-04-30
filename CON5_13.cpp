#include<bits/stdc++.h>
using namespace std;


int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int cnt = 0;
		int a=0, b=0, c=0;
		int dp[n];
		dp[0] = 1;
		for(int i=1; i<n; i++){
			dp[i] = min({dp[a]*2, dp[b]*3, dp[c]*5});
			if(dp[i] == dp[a]*2) a++;
			if(dp[i] == dp[b]*3) b++;
			if(dp[i] == dp[c]*5) c++;
		}
		cout << dp[n-1] << endl;
	}
    return 0;
}
