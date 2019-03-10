#include<iostream>
#include<string>
using namespace std;

int main(){
	int m;
	string s;
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>s;
		for(int j=0;j<s.size();j++){
			if(s[j]>='0'&&s[j]<='9'){
				cout<<(j+1)<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
