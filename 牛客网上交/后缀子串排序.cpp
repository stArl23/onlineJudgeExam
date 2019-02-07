#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	string input;
	while(cin>>input){
		vector<string> res;
		for(int i=0;i<input.size();i++){
			res.push_back(input.substr(i,input.size()-i));
		}
		
		sort(res.begin(),res.end());
		
		for(int i=0;i<res.size();i++){
			cout<<res[i]<<endl;
		}
	}
	return 0;
}
