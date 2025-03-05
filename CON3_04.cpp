#include<bits/stdc++.h>
#define ll long long
using namespace std;

int MOD=123456789;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int &x:a) cin >> x;
        sort(a, a+n);
        ll sum1=0, sum2=0;
        for(int i=0; i<n; i+=2){
            sum1 = sum1*10+a[i];
        }
        for(int i=1; i<n; i+=2){
            sum2 = sum2*10+a[i];
        }
        cout << sum1+sum2 << endl;
    }
    return 0;
}
