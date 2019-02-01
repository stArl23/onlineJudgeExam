#include<iostream>

using namespace std;

int main(){
	string n1,n2;
	while(cin>>n1>>n2){
		int num=0;
		if(n1.size()>n2.size()){
			int length=n1.size()-n2.size();
			for(int i=0;i<=length;i++){
				bool flag=true;
				for(int j=0;j<n2.size();j++){
					if(n1[i+j]!=n2[j]){
						flag=false;
						break;
					}
				}
				if(flag)num++;
			}
		}
		cout<<num<<endl;
	}
	return 0;
}
