#include<bits/stdc++.h>
#define ll long long
#define oo 1e9
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, v; cin >> n >> v;
		int A[n], C[n];
		for(int &x:A) cin>>x;
		for(int &x:C) cin>>x;
		vector<int> cost(v+1, 0);
		for(int i=0; i<n; i++){
			for(int j=v; j>=A[i]; j--){
				cost[j] = max(cost[j], cost[j-A[i]] + C[i]);				
			}
		}
		cout << cost[v] << endl;
    }
    return 0;
}
