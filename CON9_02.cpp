#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int V; cin >> V;
	vector<pair<int, int>> Edge;
	cin.ignore();
	for(int i=1; i<=V; i++){
		string adj; getline(cin, adj);
		stringstream ss(adj);
		int j;
		while(ss >> j){
			if(i<j){
				Edge.push_back({i, j});
			}
		}	
	}
	for(auto E:Edge){
		cout << E.first << " " << E.second << endl;
	}
    return 0;
}
