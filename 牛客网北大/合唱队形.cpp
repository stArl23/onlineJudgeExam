#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int num;
	int dp1[101],dp2[101];
	while(cin>>num) {
		int nums[101];
		for(int i=1; i<=num; i++) {
			cin>>nums[i];
		}
		
		for(int i=1;i<=num;i++){
			int tmax=1;
			for(int j=1;j<i;j++){
				if(nums[i]>nums[j]){
					tmax=max(tmax,dp1[j]+1);
				}
			}
			dp1[i]=tmax;
		}
		
		for(int i=num;i>=1;i--){
			int tmax=1;
			for(int j=num;j>i;j--){
				if(nums[i]>nums[j]){
					tmax=max(tmax,dp2[j]+1);
				}
			}
			dp2[i]=tmax;
		}
		
		int max1=1;
		for(int i=1;i<=num;i++){
			max1=max(max1,dp1[i]+dp2[i]-1);
		} 
		
		cout<<(num-max1)<<endl;
	}
	return 0;
}
