#include<bits/stdc++.h>
#define State vector<int>
using namespace std;

int main(){
	int n; cin >> n;
	queue<int> q;
	int num;
	while(n--){
		string cmd; cin >> cmd;
		if(cmd == "PUSH"){
			cin >> num;
			q.push(num);
		}
		if(cmd == "POP"){
			if(!q.empty()) q.pop();
		}
		if(cmd == "PRINTFRONT"){
			if(!q.empty()) cout << q.front() << endl;
			else cout << "NONE\n";
		}
	}
    return 0;
}
