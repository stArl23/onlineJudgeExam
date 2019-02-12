#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	int n,max1,min1,temp;
	while(cin>>n){
		vector<int> nums;
		max1=0;
		min1=0;
		int max2=-99999;
		int min2=99999;
		for(int i=0;i<n;i++){
			cin>>temp;
			nums.push_back(temp);
			if(min2>temp){
				min2=temp;
				min1=i;
			}
			
			if(max2<temp){
				max2=temp;
				max1=i;
			}
		} 
		
		swap(nums[max1],nums[min1]);
		
		for(int i=0;i<nums.size();i++){
			cout<<nums[i]<<" ";
		}
		cout<<endl;
	}
	 
	return 0;
}
