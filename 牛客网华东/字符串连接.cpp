#include<iostream>

using namespace std;

int main(){
	string s1,s2;
	while(cin>>s1>>s2){
		string s3(s1+s2);
		cout<<s3<<endl;
	}
	return 0;
}
