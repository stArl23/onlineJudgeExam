#include<iostream>
using namespace std;

char reverse_code(char a){
	if(a>='a'&&a<='z'){
		a=('z'-'a')-(a-'a')+'a';
		return a;
	}else if(a>='A'&&a<='Z'){
		a=('Z'-'A')-(a-'A')+'A';
		return a;
	} else{
		return a;
	}
}
int main(){
	string input;
	while(getline(cin,input)){
		if(input=="!")break;
		for(int i=0;i<input.size();i++){
			input[i]=reverse_code(input[i]);
		}
		cout<<input<<endl;
	}
	return 0;
}
