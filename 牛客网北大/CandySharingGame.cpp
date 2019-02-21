#include<iostream>
#include<vector>

using namespace std;

int get_next(int index,int size) {
	return (index+1)%size;
}

int main() {
	int n;
	while(cin>>n&&n>-1) {
		
		vector<int> nums;
		//需要同时分，不能一个分完再分另外一个 
		int share[1000];
		for(int i=0; i<n; i++) {
			int n1;
			cin>>n1;
			nums.push_back(n1);
		}

		int c=0;
		while(1) {
			//特例 
			if(n==0){
				cout<<"0 0"<<endl;
				break;
			}else if(n==1){
				cout<<"0 "<<nums[0]<<endl;
				break;
			} 
			c++;
			for(int i=0; i<nums.size(); i++) {
				share[i]=nums[i]/2;
			}

			for(int i=0; i<nums.size(); i++) {
				nums[get_next(i,nums.size())]+=share[i];
				nums[i]-=share[i];
			}

			for(int i=0; i<nums.size(); i++) {
				if(nums[i]%2==1)nums[i]++;
			}

			bool flag=true;
			for(int i=1; i<nums.size(); i++) {
				if(nums[i-1]!=nums[i]) {
					flag=false;
					break;
				}
			}

			if(flag) {
				cout<<c<<" "<<nums[0]<<endl;
				break;
			}
			
		}
	}
	return 0;
}
