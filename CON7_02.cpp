#include<bits/stdc++.h>
using namespace std;

int main() {
	int Q; cin >> Q;
	string s; int n;
	stack<int> st;
	while (Q--) {
		cin >> s;
		if (s == "PUSH") {
			cin >> n;
			st.push(n);
		}
		else if (s == "POP" && !st.empty()) st.pop();
		else if (s == "PRINT") {
			if (!st.empty()) cout << st.top() << endl;
			else cout << "NONE" << endl;
		}
	}
}
