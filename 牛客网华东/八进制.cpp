#include<iostream>
#include<algorithm>
#include<vector> 
using namespace std;

int main(){
	int num;
	while(cin>>num){
		vector<int> res;
		while(num>0){
			int t=num%8;
			res.push_back(t);
			num/=8;
		}
		
		reverse(res.begin(),res.end());
		for(int i=0;i<res.size();i++)
			cout<<res[i];
		cout<<endl;
	}
	return 0;
}
