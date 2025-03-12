#include<bits/stdc++.h>
#define ll long long
#define oo 1e9
using namespace std;

string res;

void Try(string s, int k){
	if(k==0) return;
	for(int i=0; i<s.size(); i++){
		for(int j=i+1; j<s.size(); j++){
			if(s[i] < s[j]){
				swap(s[i], s[j]);
				res = max(res, s);
				Try(s, k-1);
				swap(s[i], s[j]);
			}
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		int k; string s;
		cin >> k >> s;
		res = s;
		Try(s, k);
		cout << res << endl;
    }
    return 0;
}
