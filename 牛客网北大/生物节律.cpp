#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
	int p,e,i,d,maxd=21252;
	while(cin>>p>>e>>i>>d){
		int temp=1;
		for(;;temp++)
			if((temp-p)%23==0 && (temp-e)%28==0 && (temp-i)%33==0)    break;
		printf("Case: the next triple peak occurs in %d days.\n",(temp-d));
	}
	return 0;
}
