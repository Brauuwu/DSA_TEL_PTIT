#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n, k, a[20], sum, X[20], length, flag;

void Result(){
	flag = 1;
	cout << '[';
	for(int i=1; i<=length; i++){
		cout << a[X[i]] << (i<length ? " " : "] ");
	}
}

void Try(int i){
	for(int j=X[i-1]+1; j<=n; j++){
		X[i] = j;
		sum += a[X[i]];
		length++;
		if(sum == k){
			Result();
		}
		else if(sum < k) Try(i+1);
		length--;
		sum -= a[X[i]];
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		flag = 0;
		length = 0;
		sum = 0;
		cin >> n >> k;
		for(int i=1; i<=n; i++) cin >> a[i];
		sort(a+1, a+n+1);
		Try(1);
		if(!flag) cout << -1;
		cout << endl;
	}
    return 0;
}
