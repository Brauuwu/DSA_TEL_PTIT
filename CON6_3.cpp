#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x:a) cin >> x;
		int k, res=0;
		for(int i=0; i<n; i++){
			k = i;
			for(int j=i+1; j<n; j++){
				if(a[j] < a[k]) k = j;
			}
			if(k != i) res++;
			swap(a[k], a[i]);
		}
		cout << res << endl;
	}
    return 0;
}
