#include<bits/stdc++.h>
using namespace std;

int n; string s;

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n >> s;
        if(next_permutation(s.begin(), s.end())){
            cout << n << " " << s << endl;
        }
        else cout << n << " BIGGEST" << endl;
    }
    return 0;
}
