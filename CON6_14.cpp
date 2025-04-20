#include<bits/stdc++.h>
using namespace std;

int isPrime(int n){
	for(int i=2; i*i<=n; i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int t; cin >> t;
	while(t--){
		bool flag = true;
		int n; cin >> n;
		for(int i=2; i<=n/2; i++){
			if(isPrime(i) && isPrime(n-i)){
				flag = false;
				cout << i << " " << n-i << endl;
				break;
			}
		}
		if(flag) cout << -1 << endl;
	}
    return 0;
}
