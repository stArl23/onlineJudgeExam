#include <iostream>
#include <Cstring>

using namespace std;

void rever(char word[],int s,int e) { //��ת
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
		getchar();//�õ��س�
		for(int i = 0; i < n; i++) {
			int j,s = 0,e ;
			gets(word);
			for(j = 0; j <= strlen(word); j++) {

				if(word[j] == ' '||word[j] == NULL) { //eΪ�ո��ĩβ��ǰһ��λ�ã�sΪ��һ��λ��
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
