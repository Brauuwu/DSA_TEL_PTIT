#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll sumSubstring(string n){
	ll total=0, current=0;
	ll k=0;
	for(int i=n.length(); i>=0; i--){
		current = (n[i]-'0')*k + current;
		total += current;
		k = k*10+1;
	}
	return total;
}

int main(){
	int t; cin >> t;
	while(t--){
		string n; cin >> n;
		cout << sumSubstring(n) << endl;
	}
    return 0;
}
