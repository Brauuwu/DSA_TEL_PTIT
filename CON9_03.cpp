#include<bits/stdc++.h>
#define ll long long
#define oo 1e9
using namespace std;

int main(){
    vector<int> Adj[1005];
    int n; cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            int x; cin >> x;
            if(x){
                Adj[i].push_back(j);
            }
        }
    }
    for(int i=1; i<=n; i++){
        for(int x:Adj[i]) cout << x << " ";
        cout << endl;
    }
	return 0;
}
