#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, s;
        cin >> n >> s;
        int a[n];
        for(int &x:a) cin >> x;
        vector<int> C(s+1, 0);
        C[0] = 1;
        for(int x:a){
        	for(int i=s; i>=x; i--){
        		C[i] = C[i] || C[i-x];
			}
		}
		if(C[s]) cout << "YES\n";
		else cout << "NO\n";
    }
    return 0;
}
