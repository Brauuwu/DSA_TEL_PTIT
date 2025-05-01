#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x:a) cin >> x;
		int i=0;
		while(a[i+1] >= a[i]) i++;
		int j=n-1;
		while(a[j-1] <= a[j]) j--;
		int max_val=0, min_val=1e9;
		for(int l=i; l<=j; l++){
			min_val = min(min_val, a[l]);
			max_val = max(max_val, a[l]);
		}
		int x=i;
		for(int l=i; l>=0; l--){
			if(a[l]>min_val) x=l;
		}
		int y=j;
		for(int l=j; l<n; l++){
			if(a[l]<max_val) y=l;
		}
		cout << x+1 << " " << y+1 << endl;
	}
    return 0;
}
