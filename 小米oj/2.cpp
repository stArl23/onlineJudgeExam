#include <bits/stdc++.h>
#include<sstream>
#include<cstring>
#include<map>
using namespace std;

int main()
{
    string line;
    getline(cin,line);
    istringstream iss(line);
    int temp;
    map<int,int> nums;
    while(iss>>temp){
    	if(nums.count(temp)==0){
        	nums.insert(make_pair(temp,1));
        }else{
        	nums[temp]++;
        }
    }
    
    for(auto &i: nums){
    	if(i.second==1){
        	cout<<i.first<<endl;
            break;
        }
        
    }
    
    return 0;
}
