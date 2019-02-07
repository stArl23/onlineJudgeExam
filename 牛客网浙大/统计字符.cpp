#include<iostream>
using namespace std;

int main(){
	string index,input;
	while(getline(cin,index)){
		if(index=="#")break;
		getline(cin,input);
		for(int i=0;i<index.size();i++){
			int count=0;
			for(int j=0;j<input.size();j++){
				if(index[i]==input[j])count++;
			}
			cout<<index[i]<<" "<<count<<endl;
		}
	}
	return 0;
}
