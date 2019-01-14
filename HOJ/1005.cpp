#include<iostream>

using namespace std;

int main(){
	int a,b;
	int n;
	int nums[100];
	while(cin>>a>>b>>n&&(a||b||n)){
		nums[1]=nums[2]=1; 
		for(int i=3;i<=49;i++){
			nums[i]=(a*nums[i-1]+b*nums[i-2])%7;
			//cout<<nums[1]<<endl;
		}
		//周期为何是49？ 
		cout<<nums[n%49]<<endl;
//		result.push_back(nums[1]);
	}	
	
	return 0;
} 
