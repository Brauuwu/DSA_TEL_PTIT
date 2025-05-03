#include<bits/stdc++.h>
#define ll long long
using namespace std;

queue<string> q;
set<string> S;

void Erase(string s){
	vector<pair<int, int>> v;
	stack<int> st;
	for(int i=0; i<s.size(); i++){
		if(s[i] == '(') st.push(i);
		if(s[i] == ')'){
			v.push_back({st.top(), i});
			st.pop();
		}
	}
	for(auto x:v){
		string f=s;
		f.erase(x.first, 1);
		f.erase(x.second-1, 1);
		if(!S.count(f)){
			q.push(f);
			S.insert(f);
		}
	}
}

int main(){
	string s; cin >> s;
	q.push(s);
	while(!q.empty()){
		string current = q.front();
		q.pop();
		Erase(current);
	}
	for(auto x:S) cout << x << endl;
    return 0;
}
