#include<bits/stdc++.h>
#define ll long long
#define oo 1e9
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x:a) cin >> x;
		if(next_permutation(a, a+n)){
			for(int x:a) cout << x << " ";
		}
		else{
			sort(a, a+n);
			for(int x:a) cout << x << " ";
		}
		cout << endl;
    }
    return 0;
}
