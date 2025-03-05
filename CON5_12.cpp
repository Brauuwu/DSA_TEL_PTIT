#include<bits/stdc++.h>
#define ll long long
using namespace std;

int MOD = 1e9+7;

ll Permutation(int n, int k){
	ll prod = 1;
	for(int i=n-k+1; i<=n; i++){
		prod *= i;
		prod %= MOD;
	}
	return prod;
}

int main(){
    int t; cin >> t;
    while(t--){
    	int n, k; cin >> n >> k;
		cout << Permutation(n, k) << endl;
    }
    return 0;
}
