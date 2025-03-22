#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x:a) cin >> x;
		for(int i=0; i<n; i++){
			cout << "[";
			for(int j=i; j<n; j++){
				cout << a[j] << (j<n-1 ? " " : "]\n");
			}
			for(int j=n-1; j>=1; j--){
				a[j] += a[j-1];
			}
		}
	}
	return 0;
}
