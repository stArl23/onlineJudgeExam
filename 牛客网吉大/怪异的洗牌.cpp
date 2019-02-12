#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

int main() {
	int n,k,x;
	while(cin>>n>>k) {
		deque<int> nums;
		for(int i=1; i<=n; i++) {
			nums.push_back(i);
		}
		//shift
		for(int i=0; i<k; i++) {
			cin>>x;
			for(int j=0; j<x; j++) {
				int temp=nums[0];
				nums.push_back(temp);
				nums.pop_front();
			}

			//flip
			int tn=0;
			if(n%2==0) {
				tn=n/2;
			} else {
				tn=(n-1)/2;
			}

			reverse(nums.begin(),nums.begin()+tn);
		}



		for(int i=0; i<nums.size(); i++) {
			cout<<nums[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
