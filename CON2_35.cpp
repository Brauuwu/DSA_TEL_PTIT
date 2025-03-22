#include<bits/stdc++.h>
using namespace std;

int n, k, s;
int X[30], cnt, sum;

void Try(int i){
	for(int j=X[i-1]+1; j<=n-k+i; j++){
		X[i] = j;
		sum += X[i];
		if(i == k){
			if(s == sum) cnt++;
		}
		else if(sum < s) Try(i+1);
		sum -= X[i];
	}
}

int main() {
	while(1){
		memset(X, 0, sizeof(X));
		cnt=0, sum=0;
		cin >> n >> k >> s;
		if(n==0 && k==0 && s==0) break;
		Try(1);
		cout << cnt << endl;
	}
	return 0;
}
