#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin>>n;
		int a[n];
		for(int &x:a) cin >> x;
		int inc[n] = {0}, dec[n] = {0};
		for(int i=0; i<n; i++){
			inc[i] = a[i];
			for(int j=0; j<i; j++){
				if(a[j] < a[i]){
					inc[i] = max(inc[i], inc[j] + a[i]);
				}
			}
		}
		for(int i=n-1; i>=0; i--){
			dec[i] = a[i];
			for(int j=i+1; j<n; j++){
				if(a[j] < a[i]){
					dec[i] = max(dec[i], dec[j] + a[i]);
				}
			}
		}
		int res = 0;
		for(int i=0; i<n; i++){
			res = max(res, inc[i] + dec[i] - a[i]);
		}
		cout << res << endl;
	}
	return 0;
}
