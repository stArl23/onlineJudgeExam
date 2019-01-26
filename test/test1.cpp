#include <stdio.h>
#include <string>
#include <string.h>
using namespace std;

int main() {
	int m,n;
	char  agent[1000][16];
	char  server[5000][16];
	while(scanf("%d",&n)!=EOF) {
		for(int i=0; i<n; i++)
			scanf("%s",agent[i]);
		scanf("%d",&m);
		for(int i=0; i<m; i++)
			scanf("%s",server[i]);

		int index=0,change=0,max;
		while(index<m) {
			max=0;
			for(int i=0; i<n; i++) {
				int j=index;
				int count=0;
				while(j<m&&strcmp(agent[i],server[j])) {
					count++;
					j++;
				}

				if(count>max)
					max=count;
			}
			change++;
			if(max==0)
				break;
			index=index+max;
		}
		if(max==0)
			printf("-1\n");
		else
			printf("%d\n",change-1);

	}
	return 0;
}
