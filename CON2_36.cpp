#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool check(int *nums){
	sort(nums, nums+5);
	do{
		for(int op1=0; op1<3; op1++){
			for(int op2=0; op2<3; op2++){
				for(int op3=0; op3<3; op3++){
					for(int op4=0; op4<3; op4++){
						ll res = nums[0];
						res = (op1 == 0) ? res+nums[1] : (op1 == 1) ? res-nums[1] : res*nums[1];
						res = (op2 == 0) ? res+nums[2] : (op2 == 1) ? res-nums[2] : res*nums[2];
						res = (op3 == 0) ? res+nums[3] : (op3 == 1) ? res-nums[3] : res*nums[3];
						res = (op4 == 0) ? res+nums[4] : (op4 == 1) ? res-nums[4] : res*nums[4];
						if(res == 23) return true;
					}
				}
			}
		}
	}
	while(next_permutation(nums, nums+5));
	return false;
}

int main(){
    int t; cin >> t;
    while(t--){
    	int nums[5];
    	for(int &x:nums) cin >> x;
    	if(check(nums)) cout << "YES\n";
    	else cout << "NO\n";
	}
    return 0;
}
