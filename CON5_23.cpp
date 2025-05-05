#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x:a) cin >> x;
		vector<int> steps(n+1, 1);
		int res = 0;
		for(int i=1; i<n; i++){
			int cnt = 0 ;
			for(int j=0; j<i; j++){
				if(a[j] <= a[i]) cnt = max(cnt, steps[j]);
			}
			steps[i] += cnt;
			res = max(res, steps[i]);
		}
		cout << n-res << endl;
	}
    return 0;
}
