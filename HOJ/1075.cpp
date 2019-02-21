#include<iostream>
#include<cstdio>
#include<map>
using namespace std;

int main() {
	char input[15];
	map<string,string> maps;
	scanf("%s",input);
	string inputs=input;
	if(inputs=="START") {
		char s1[15];
		char s2[15];
		while(scanf("%s",s1)) {
			string ss1=s1;
			if(ss1=="END")break;
			scanf("%s",s2);
			string ss2=s2;
			maps[ss2]=ss1;
		}
	}
	
	cin.ignore();
	while(gets(input)){
		inputs=input;
		if(inputs=="START")continue;
		if(inputs=="END")break;
		
		string s=input;
		
		for(map<string,string>::iterator iter=maps.begin();iter!=maps.end();iter++){
			string key=iter->first;
			string value=iter->second;
			size_t pos=s.find(key);
			if(pos!=string::npos){
				s.replace(pos,key.size(),value);
			}
		}
		
		printf("%s\n",s.c_str());
	}
	return 0;
}
