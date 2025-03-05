#include<bits/stdc++.h>
#define ll long long
using namespace std;

void Binary(int n){
	if(n==0) return;
	Binary(n/2);
	cout << n%2;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i=1; i<=n; i++){
			Binary(i);
			cout << " ";
		}
		cout << endl;
	}
	return 0;
}
