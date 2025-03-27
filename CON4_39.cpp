#include<bits/stdc++.h>
#define ll long long
#define oo 1e9
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	int a[n], b[n-1];
    	int check = 1;
    	for(int &x:a) cin >> x;
    	for(int i=0; i<n-1; i++) cin >> b[i];
    	for(int i=0; i<n-1; i++){
    		if(a[i] != b[i]){
    			cout << i+1 << endl;
    			check = 0;
    			break;
			}
		}
		if(check) cout << n << endl;
	}
    return 0;
}
