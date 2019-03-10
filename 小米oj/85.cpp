#include <bits/stdc++.h>
#include<cstdio>
#include<cstring>
#include<map>
#include<queue>
#include<set>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;

vector<int> nums;
int main(){
	string line;
	getline(cin,line);
	size_t pos;
	while((pos=line.find(","))&&pos!=string::npos){
		line.replace(pos,1," ");
	}
	
	istringstream iss(line);
	int temp;
	//vector<int> is_visited;
	while(iss>>temp){
		nums.push_back(temp);
	}

	//dp0 n-1Ã»ÓÐÇ¿£¬dp1 maxvalue(n-1) 
	int dp0=0,dp1=0;
	for(int i=0;i<nums.size();i++){
		int temp=dp1;
		dp1=max(dp1,dp0+nums[i]);
		dp0=temp;
	}
	cout<<dp1<<endl;
	return 0;
}
