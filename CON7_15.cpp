#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
    	string s; cin >> s;
    	stack<string> st;
    	for(char c:s){
    		if(isalpha(c)) st.push({c});
    		else{
    			string op1 = st.top(); st.pop();
    			string op2 = st.top(); st.pop();
    			string tmp = '(' + op2 + c + op1 + ')';
    			st.push(tmp);
			}
		}
		cout << st.top() << endl;
	}
    return 0;
}
