#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;

string intToString(int i) {
	ostringstream temp;
	temp<<i;
	return temp.str();
}

string bigIntToString(vector<int> nums){
	string res="";
	for(int i=0;i<nums.size();i++){
		res+=intToString(nums[i]);
	}
	return res;
}

vector<int> getBigInt(string num){
	vector<int> res;
	for(int i=0;i<num.size();i++){
		res.push_back(num[i]-'0');
	}
	reverse(res.begin(),res.end());
	return res;
}

vector<int> add(string num1,string num2){
	vector<int> n1=getBigInt(num1),n2=getBigInt(num2),n3;
	int min1=min(n1.size(),n2.size());
	int i=0,add=0;
	for(;i<min1;i++){
		int t=n1[i]+n2[i]+add;
		n3.push_back(t%10);
		add=t/10;
	}
	
	for(;i<n1.size();i++){
		int t=n1[i]+add;
		n3.push_back(t%10);
		add=t/10;
	}
	
	for(;i<n2.size();i++){
		int t=n2[i]+add;
		n3.push_back(t%10);
		add=t/10;
	}
	
	if(add!=0){
		n3.push_back(add);
	}
	
	reverse(n3.begin(),n3.end());
	return n3;
}

int main(){
	string num1;
	string sum="0";
	vector<int> n3;
	while(cin>>num1&&num1!="0"){
		n3=add(num1,sum);
		sum=bigIntToString(n3);
		
	}
	for(int i=0;i<n3.size();i++){
			cout<<n3[i];
		}
		cout<<endl;
	return 0;
}
