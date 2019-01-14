#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

int getInt(string &s,vector<int> &nums)
{
    istringstream iss(s);
    int res = 0;
    int num;
    while(iss >> num){
		nums.push_back(num);
		res++;
	}
	return res;
        
}


int main(){
	
	string temp;
	vector<int> nums(0);
	while(getline(cin,temp)){
		getInt(temp,nums);
		int n=nums[0];
		if(n==0)break;
		int down=4,up=6,wait=5,time=0,now=0;
		for(int i=1;i<=n;i++){
			if(now<nums[i]){
				time+=up*(nums[i]-now);
			}else if(nums[i]<now){
				time+=down*(now-nums[i]);
			}else{
				
			}
			
	
			time+=wait;
			now=nums[i];
			
		}
		cout<<time<<endl;
		nums.clear();
	}
	
	return 0;
}
