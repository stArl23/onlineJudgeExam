#include <iostream>
#include<queue>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<sstream>
#include<vector>
#include<istream>
#include<map>
#include<stack>
#define N 100
const int MAX=10000;
using namespace std;
int main()
{
    int a[4],time_sum=0;
    while(scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]))
    {
        if(a[0]==0&&a[1]==0&&a[2]==0&&a[3]==0) goto loop;
        if (time_sum!=0)
		{
			printf("\n");
		}
		time_sum=1;
        int sign,j=0,k=0;

        sort(a,a+4);
        sign=a[0];
        while(sign==0)
        {
            sign=a[j++];
        }
        do{
                if(a[0]==0) continue;
                if(sign!=a[0]) { printf("\n"); k=0; }
                sign=a[0];
               if(k==0)
               {
                for(int i=0;i<4;i++)
                printf("%d",a[i]);
               }
             else
             {
                 printf(" %d",a[0]);
                 for(int i=1;i<4;i++)
                printf("%d",a[i]);
             }
             k++;
        }while(next_permutation(a,a+4));
        printf("\n");
    }
    loop:
        return 0;
}
