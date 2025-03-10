#include<bits/stdc++.h>
#define ll long long
#define oo 1e9
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
		int n; cin >> n;
		vector<string> a;
		a.push_back("0");
		a.push_back("1");
		for(int i=2; i<(1<<n); i <<= 1){
			for(int j=i-1; j>=0; j--){
				a.push_back(a[j]);
			}
			for(int j=0; j<i; j++){
				a[j] = "0" + a[j];
			}
			for(int j=i; j<2*i; j++){
				a[j] = "1" + a[j];
			}
		}
		for(string x:a) cout << x << " ";
		cout << endl;
    }
    return 0;
}
