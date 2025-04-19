#include<bits/stdc++.h>
#define ll long long
#define oo 1e9
using namespace std;

int prices[10005], l[10005], r[10005];

int maxProfit(int n){
	if(n==0) return 0;
	
	int minPrice = prices[0];
	l[0] = 0;
	for(int i=1; i<n; i++){
		minPrice = min(minPrice, prices[i]);
		l[i] = max(l[i-1], prices[i] - minPrice);
	}
	
	int maxPrice = prices[n-1];
	r[n-1] = 0;
	for(int i=n-2; i>=0; i--){
		maxPrice = max(maxPrice, prices[i]);
		r[i] = max(r[i+1], maxPrice - prices[i]);
	}
	
	int maxProfit = 0;
	for(int i=0; i<n; i++){
		maxProfit = max(maxProfit, l[i] + r[i]);
	}
	return maxProfit;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i=0; i<n; i++){
			cin >> prices[i];
		}
		cout << maxProfit(n) << endl;
	}
	return 0;
}
