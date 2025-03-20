#include<bits/stdc++.h>
using namespace std;

int Transform(int S, int T){
	int cnt = 0;
	while(T > S){
		if(!(T&1)) T/=2;
		else T++;
		cnt++;
	}
	return cnt+(S-T);
}

int main() {
	int t; cin >> t;
	while(t--){
		int S, T;
		cin >> S >> T;
		cout << Transform(S, T) << endl;
	}
}
