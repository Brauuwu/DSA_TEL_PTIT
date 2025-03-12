#include<bits/stdc++.h>
#define ll long long
#define oo 1e9
using namespace std;

int Bin2Dec(string s){
	while(s[0]=='0') s.erase(0, 1);
	if(s.empty()) return 0;
	ll res = 0, prod = 1;
	for(int i=s.length()-1; i>=0; i--){
		res += (s[i]-'0')*prod;
		prod *= 2;
	}
	return res;
}

int main(){
	int t; cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		cout << Bin2Dec(s1) * Bin2Dec(s2) << endl;
    }
    return 0;
}
