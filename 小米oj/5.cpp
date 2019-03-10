#include<iostream>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	string s;
	while(getline(cin,s)){
    	if(s=="")break;
    	vector<int> nums;
    	size_t pos=0;
    	while((pos=s.find(","))&&pos!=string::npos){
    		s.replace(pos,1," ");
		}
        istringstream iss(s);
        int i;
        while(iss>>i){
        	nums.push_back(i);
		}
		
		sort(nums.begin(),nums.end());
		
		
		cout<<nums[nums.size()/2]<<endl;
    }
    
    return 0;
}
