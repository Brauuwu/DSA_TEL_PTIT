#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
    	int m, n;
    	cin >> m >> n;
    	int a[100][100], dp[100][100];
    	for(int i=1; i<=m; i++){
    		for(int j=1; j<=n; j++){
    			cin >> a[i][j];
			}
		}
		dp[1][1] = 1;
		for(int i=1; i<=m; i++){
			for(int j=1; j<=n; j++){
				if(i==1 && j==1) continue;
				dp[i][j] = dp[i-1][j] + dp[i][j-1];
			}
		}
		cout << dp[m][n] << endl;
	}
    return 0;
}
