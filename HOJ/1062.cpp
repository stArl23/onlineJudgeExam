#include <iostream>
#include <Cstring>

using namespace std;

void rever(char word[],int s,int e) { //翻转
	char temp;
	for(s,e; s < e; s++,e--) {
		temp = word[s];
		word[s] = word[e];
		word[e] = temp;
	}
}
int main() {

	char word[1000];
	int n;

	while(cin>>n) {
		getchar();//得到回车
		for(int i = 0; i < n; i++) {
			int j,s = 0,e ;
			gets(word);
			for(j = 0; j <= strlen(word); j++) {

				if(word[j] == ' '||word[j] == NULL) { //e为空格或末尾的前一个位置，s为后一个位置
					e = j - 1;
					rever(word,s,e);
					s = j + 1;

				}
			}
			puts(word);

		}
	}
	return 0;
}
