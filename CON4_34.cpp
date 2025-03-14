#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int m, n; cin >> m >> n;
		int p[m], q[n];
		int r[m+n-1]={0};
		for(int &x:p) cin >> x;
		for(int &x:q) cin >> x;
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				r[i+j] += p[i]*q[j];
			}
		}
		for(int x:r) cout << x << " ";
		cout << endl;
	}
	return 0;
}
