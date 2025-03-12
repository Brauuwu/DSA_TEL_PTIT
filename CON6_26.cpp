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
		for(int i=0; i<n-1; i++){
			cout << "Buoc " << i+1 << ": ";
			for(int j=i+1; j<n; j++){
				if(a[i]>a[j]) swap(a[i], a[j]);
			}
			for(int x:a) cout << x << " ";
			cout << endl;
		}
    }
    return 0;
}
