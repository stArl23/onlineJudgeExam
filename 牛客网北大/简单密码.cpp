#include<iostream>

using namespace std;

int main(){
	string start,input,temp;
	while(cin>>start&&start!="ENDOFINPUT"){
		input="";
		while(getline(cin,temp)&&temp!="END"){
			input+=temp;
		}
		
		for(int i=0;i<input.size();i++){
			if(input[i]>='A'&&input[i]<='Z'){
				int t=(input[i]-'A'-5+26)%26;
				input[i]=t+'A';
			}
		}
		
		cout<<input<<endl;
	}
	return 0;
}
