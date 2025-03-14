#include<bits/stdc++.h>
using namespace std;

int calc(int a, int b, char c) {
	if (c == '+')return a + b;
	if (c == '-')return a - b;
	if (c == '*')return a * b;
	if (c == '/'){
		if(b == 0) return 0;
		return a / b;
	}
	return 0;
}

int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		stack<int> X;
		for (int i = s.length() - 1; i >= 0; i--) {
			if (isdigit(s[i])) X.push(s[i] - '0');
			else {
				int a = X.top(); X.pop();
				int b = X.top(); X.pop();
				X.push(calc(a, b, s[i]));
			}
		}
		cout << X.top() << endl;
	}
	return 0;
}
