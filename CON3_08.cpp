#include<bits/stdc++.h>
#define ll long long
#define oo 1e9
using namespace std;

struct Job{
	int Si, Fi;
};

bool cmp(Job a, Job b){
	return a.Fi < b.Fi;
}

int main(){
    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	vector<Job> J(n);
    	for(Job &x:J) cin >> x.Si;
		for(Job &x:J) cin >> x.Fi;
		sort(J.begin(), J.end(), cmp);
		vector<int> dp(n, 1);
		int res=1;
		for(int i=0; i<n; i++){
			int maxi=0;
			for(int j=0; j<i; j++){
				if(J[i].Si >= J[j].Fi){
					maxi = max(maxi, dp[j]);
				}
			}
			dp[i] += maxi;
			res=max(res, dp[i]);
		}
		cout << res << endl;
    }
    return 0;
}
