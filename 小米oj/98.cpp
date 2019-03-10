#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	string line;
	while(getline(cin,line)) {
		if(line=="")break;
		vector<int> nums;
		istringstream iss(line);
		int temp;
		while(iss>>temp) {
			nums.push_back(temp);
		}

		sort(nums.begin(),nums.end());

		int max1=-1;
		for(int i=0; i<nums.size(); i++) {
			int sum=nums[i]*(nums.size()-i);
			if(max1<sum) {
				max1=sum;
			}
		}

		cout<<max1<<endl;	
	}
	return 0;
}
