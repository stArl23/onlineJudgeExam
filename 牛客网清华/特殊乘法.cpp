#include<iostream>

using namespace std;

int main(){
	int sum=0;
	string a="",b="";
	while(cin>>a>>b){
		for(int i=0;i<a.size();i++){
			for(int j=0;j<b.size();j++){
				int a1=a.at(i)-'0',b1=b.at(j)-'0';
				sum+=a1*b1;
			}
		}
		
		cout<<sum<<endl;
	}
	return 0;
}
