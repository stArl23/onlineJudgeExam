#include<iostream>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	string s;
	while(getline(cin,s)) {
		if(s=="")break;
		vector<int> nums;
		vector<bool> dp;
		size_t pos=0;
		while((pos=s.find(","))&&pos!=string::npos) {
			s.replace(pos,1," ");
		}
		istringstream iss(s);
		int i;
		while(iss>>i) {
			nums.push_back(i);
		}

		int t=1;
		int ans=1;
		sort(nums.begin(),nums.end());
		for(int i=1; i<nums.size(); i++) {
			if(nums[i]==nums[i-1]+1) {
				t++;
			} else {
				t=1;
			}
			if(t>ans) {
				ans=t;
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}
