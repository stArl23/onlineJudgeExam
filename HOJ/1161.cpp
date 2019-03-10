#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int main(){
	char s[1001];
	while(gets(s)){
		for(int i=0;s[i]!='\0';i++){
			if(s[i]>='A'&&s[i]<='Z'){
				s[i]=char(s[i]-'A'+'a');
			}
		}
		printf("%s\n",s);
	}
	return 0;
}
