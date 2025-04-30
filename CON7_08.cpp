#include<bits/stdc++.h>
using namespace std;

string Transform(string s){
	string res = "";
	stack<char> st;
	for(char c:s){
		if(c==')'){
			string tmp;
			while(!st.empty() && st.top()!='('){
				tmp = st.top() + tmp;
				st.pop();
			}
			st.pop();
			char sgn;
			if(!st.empty()) sgn=st.top();
			for(char ch:tmp){
				if(sgn=='-' && !st.empty()){
					if(ch=='-') st.push('+');
					else if(ch=='+') st.push('-');
					else st.push(ch);
				}
				else st.push(ch);
			}
		}
		else st.push(c);
	}
	while(!st.empty()){
		res = st.top() + res;
		st.pop();
	}
	return res;
}

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		cout << Transform(s) << endl;
	}
    return 0;
}
