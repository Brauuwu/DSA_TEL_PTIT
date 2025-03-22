#include<bits/stdc++.h>
using namespace std;

int sgn(int a, int b, char c){
	if(c == '+') return a+b;
	if(c == '-') return a-b;
	if(c == '*') return a*b;
	if(c == '/') return a/b;
}

int calc(string s){
	stack<int> st;
	for(char c:s){
		if(isdigit(c)) st.push(c-'0');
		else{
			int op1 = st.top(); st.pop();
			int op2 = st.top(); st.pop();
			st.push(sgn(op2, op1, c));
		}
	}
	return st.top();
}

int main() {
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		cout << calc(s) << endl;
	}
	return 0;
}
