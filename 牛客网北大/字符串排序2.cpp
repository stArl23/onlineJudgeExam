#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(string &s1,string& s2){
	return s1.length()<s2.length();
} 
int main(){
	string input;
	int num;
	while(cin>>num){
		int i=0;
		vector<string> ss;
		cin.ignore();
		while(i<num&&getline(cin,input)&&input!="stop"){
			ss.push_back(input);
			i++;
		}
		
		sort(ss.begin(),ss.end(),cmp);
		
		for(auto s:ss){
			cout<<s<<endl;
		}
		
	} 
	return 0;
}
