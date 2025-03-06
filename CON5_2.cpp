#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x:a) cin >> x;
		vector<int> L(n, 1);
		for(int i=1; i<n; i++){
			for(int j=0; j<i; j++){
				if(a[j] < a[i]) L[i] = max(L[i], L[j]+1);
			}
		}
		cout << *max_element(L.begin(), L.end()) << endl;
	}
    return 0;
}
