#include<iostream>
#include<vector>
#include<string>
#include<sstream>

using namespace std;

long long gcd(long long a,long long b){
	return b!=0?gcd(b,a%b):a;
}

long long getInt(string &s,vector<long long> &nums)
{
    istringstream iss(s);
    int res = 0;
    long long num;
    while(iss >> num){
		nums.push_back(num);
		res++;
	}
	return res;
        
}

int main(){
	int n;
	vector<long long> result(0);
	string temp;
	cin>>n;
	//cout<<n<<endl; 
	while(n--){
		long long sum=1;
		cin.ignore();
		getline(cin,temp,'\n');
		vector<long long> nums(0);
		getInt(temp,nums);
		for(int i=0;i<nums.size();i++){
			sum=sum*nums[i]/gcd(sum,nums[i]);
		}
		result.push_back(sum);
				
	}
	
	for(int i=0;i<result.size();i++){
		cout<<result[i]<<endl;
	}
	return 0;
}
