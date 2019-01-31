#include<iostream>

using namespace std;

int main(){
	string temp;
	while(cin>>temp){
		for(int i=0;i<temp.size();i++){
			for(int j=i+1;j<temp.size();j++){
				if(temp[i]>temp[j]){
					swap(temp[i],temp[j]);
				}
			}
		}
		
		cout<<temp<<endl;
	}
	return 0;
}
