#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, s, m;
		cin >> n >> s >> m;
		if(s*m > (s-s/7)*n){
			cout << -1 << endl;
			continue;
		}
		if(s>=7 && m*7 > n*6){
			cout << -1 << endl;
			continue;
		}
		for(int i=1; i <= s-s/7; i++){
			if(n*i >= s*m){
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}
