#include<iostream>
#include<vector>
using namespace std;
//¸ß¾«¶È 
int main(){
	string num;
	while(cin>>num){
		vector<int> nums;
		while(num){
			nums.push_back(num%2);
			num/=2;
		}
		
		int power=1,sum=0;
		for(int i=nums.size()-1;i>-1;i--){
			sum+=nums[i]*power;
			power*=2;
		}
		
		cout<<sum<<endl;
	}
	return 0;
} 
