#include<bits/stdc++.h>
#define ll long long
using namespace std;

int maxSumArray(int *a, int n){
	int res = -1e9, sum = a[0];
	for(int i=1; i<n; i++){
		sum += a[i];
		res = max(res, sum);
		if(sum < a[i]) sum = a[i];
	}
	return res;
}

int main() {
    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	int a[n];
    	for(int &x:a) cin >> x;
    	cout << maxSumArray(a, n) << endl;
	}
    return 0;
}
