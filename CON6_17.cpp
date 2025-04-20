#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		for(int &x:a) cin >> x;
		sort(a, a+n);
		for(int &x:b) cin >> x;
		sort(b, b+m);
		cout << 1ll*a[n-1]*b[0] << endl;
	}
    return 0;
}
