#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x:a) cin >> x;
		int cnt = 0;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(i<j && a[i]>a[j]) cnt++;
			}
		}
		cout << cnt << endl;
	}
    return 0;
}
