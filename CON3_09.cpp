#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

struct Job{
	int ID, Deadline, Profit;
};

int cmp(Job a, Job b){
	return a.Profit > b.Profit;
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<Job> J(n);
		for(int i=0; i<n; i++){
			cin >> J[i].ID >> J[i].Deadline >> J[i].Profit;
		}
		bool slot[1001] = {false};
		sort(J.begin(), J.end(), cmp);
		int cnt=0, sum=0;
		for(int i=0; i<n; i++){
			for(int j=J[i].Deadline; j>0; j--){
				if(!slot[j]){
					slot[j] = 1;
					cnt++;
					sum += J[i].Profit;
					break;
				}
			}
		}
		cout << cnt << " " << sum << endl;
	}
}
