#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
    	string s; cin >> s;
    	stack<string> st;
    	for(int i=s.size()-1; i>=0; i--){
    		if(isalpha(s[i])) st.push({s[i]});
    		else{
    			string op1 = st.top(); st.pop();
    			string op2 = st.top(); st.pop();
    			string tmp = op1 + op2 + s[i];
    			st.push(tmp);
			}
		}
		cout << st.top() << endl;
	}
    return 0;
}
