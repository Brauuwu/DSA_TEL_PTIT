#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	int found = 0;
    	int best_a = -1, best_b = -1;
    	int max_b = n/7;
    	for(int i=max_b; i>=0; i--){
    		int remainder = n-7*i;
    		if(remainder >= 0 && remainder%4==0){
    			best_a = remainder/4;
    			best_b = i;
    			found = 1;
    			break;
			}
		}
		if(found){
			string res;
			for(int i=0; i<best_a; i++) res += "4";
			for(int i=0; i<best_b; i++) res += "7";
			cout << res << endl;
		}
		else cout << -1 << endl;
	}
    return 0;
}
