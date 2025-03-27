#include<bits/stdc++.h>
#define ll long long
using namespace std;

string Find(int S, int D){
	if(S > 9*D) return "-1";
	if(S==0 && D>1) return "-1";
	if(D==1) return (S<=9) ? to_string(S) : "-1";
	vector<int> digits(D, 0);
	digits[0] = max(1, S-9*(D-1));
	S -= digits[0];
	for(int i=D-1; i>=1; i--){
		if(S>0){
			int add = min(9, S);
			digits[i] = add;
			S -= add;
		}
	}
	if(S) return "-1";
	string res;
	for(int d:digits) res += to_string(d);
	return res;
}

int main(){
    int t; cin >> t;
    while(t--){
    	int S, D;
    	cin >> S >> D;
    	cout << Find(S, D) << endl;
	}
    return 0;
}
