#include<bits/stdc++.h>
#define ll long long
using namespace std;
int MOD=1e9+7;

int n, k, a[100], ok;

void Init(){
    for(int i=1; i<=n; i++){
        a[i]=0;
    }
}

void nextGen(){
    int i=n;
    while(i>0 && a[i]==1){
        a[i]=0;
        i--;
    }
    if(i==0) ok=0;
    else a[i]=1; 
}

int check(){
    int cnt=0;
    for(int i=1; i<=n; i++){
        if(a[i]==1) cnt++;
    }
    return cnt==k;
}

int main(){
	int t; cin >> t;
    while(t--){
        cin >> n >> k;
        Init();
        ok=1;
        while(ok){
            if(check()){
                for(int i=1; i<=n; i++){
                    cout << a[i];
                }
                cout << endl;
            }
            nextGen();
        }
    }
    return 0;
}
