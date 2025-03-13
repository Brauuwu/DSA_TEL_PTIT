#include <bits/stdc++.h>
#define ll long long
#define oo 1e9
using namespace std;

void print_stack(stack<int> st) {
    if (st.empty()) {
        cout << "empty";
        return;
    }
    vector<int> v;
    while (!st.empty()) {
        v.push_back(st.top());
        st.pop();
    }
    reverse(v.begin(), v.end());
    for(int x:v) cout << x << " ";
}

int main() {
    string s;
    stack<int> st;
    while (cin >> s) {
		if(s == "push"){
			int n; cin >> n;
			st.push(n);
		}
		else if(s == "pop" && !st.empty()){
			st.pop();
		}
		else if(s == "show"){
			print_stack(st);
			cout << endl;
		}
    }
    return 0;
}
