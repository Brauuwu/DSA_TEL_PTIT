#include<bits/stdc++.h>
using namespace std;

string ADD(string a, string b, int k){
	string res = "";
	int l = max(a.size(), b.size());
	while(a.size() < l) a = "0" + a;
	while(b.size() < l) b = "0" + b;
	int carry = 0;
	for(int i = l - 1; i >= 0; i--){
		int x = (a[i] - '0') + (b[i] - '0') + carry;
		res = char(x % k + '0') + res;
		carry = x / k;
	}
	if(carry) res = char(carry + '0') + res;
	return res;
}

int main() {
	int t; cin >> t;
	while(t--) {
		int k; cin >> k;
		string a, b; cin >> a >> b;
		cout << ADD(a, b, k) << endl;
	}
}
