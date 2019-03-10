#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<map>
using namespace std;

int main() {
	char s1[101];
	map<string,int> maps;
	while(gets(s1)) {
		string s2=s1;
		if(s2=="XXXXXX")break;
		maps[s2]=1;
	}

	while(gets(s1)) {
		string s2=s1;
		if(s2=="XXXXXX")break;
		int i=0; 
		sort(s2.begin(),s2.end());
		do {
			if(maps[s2]==1){
				i++;
				printf("%s\n",s2.c_str());
			}
		} while(next_permutation(s2.begin(),s2.end()));
		if(i==0)printf("NOT A VALID WORD\n");
		printf("******\n");
	}
	return 0;
}
