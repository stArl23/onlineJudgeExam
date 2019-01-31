#include<iostream>
using namespace std;

void changeChar(string &input,int index){
	if(input[index]>='a'&&input[index]<='z'){
		input[index]=(input[index]-'a'+1)%26+'a';
	}else if(input[index]>='A'&&input[index]<='Z'){
		input[index]=(input[index]-'A'+1)%26+'A';
	}
}

int main(){
	string input;
	while(getline(cin,input)){
		for(int i=0;i<input.size();i++){
			changeChar(input,i);
		}
		cout<<input<<endl;
	}
	return 0;
}
