#include<bits/stdc++.h>
#define State vector<int>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		queue<int> q;
		int num;
		while(n--){
			int Selection; cin >> Selection;
			switch(Selection){
				case 1:
					cout << q. size() << endl;
					break;
				case 2:
					if(q.empty()) cout << "YES\n";
					else cout << "NO\n";
					break;
				case 3:
					cin >> num;
					q.push(num);
					break;
				case 4:
					if(!q.empty()) q.pop();
					break;
				case 5:
					if(!q.empty()) cout << q.front() << endl;
					else cout << -1 << endl;
					break;
				case 6:
					if(!q.empty()) cout << num << endl;
					else cout << -1 << endl;
					break;
			}
		}
	}
    return 0;
}
