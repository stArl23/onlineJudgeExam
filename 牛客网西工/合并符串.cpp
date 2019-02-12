#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	string s1,s2;
	while(cin>>s1>>s2){
		string result="";
		reverse(s2.begin(),s2.end());
		for(int i=0;i<s1.size();i++){
			result+=s1[i];
			result+=s2[i];
		}
		
		cout<<result<<endl;
	}
	return 0;
}
