#include<iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
using namespace std;

struct Space{
	string next;
	char value;
};

static Space spaces[100001];
int main(){
	int m;
	string start1,start2,now,next;
	char value;
	while(cin>>start1>>start2>>m){
		cin.ignore();
		for(int i=0;i<m;i++){
			Space space;
			cin>>now>>space.value>>space.next;
			int s=atoi(now.c_str());
			spaces[s]=space;
		}
		
		int s1=atoi(start1.c_str()),s2=atoi(start2.c_str()),l1=0,l2=0;
		int t1=s1,t2=s2;
		while(spaces[t1].next!="-1"){
			t1=atoi(spaces[t1].next.c_str());
			l1++;
		}
		
		while(spaces[t2].next!="-1"){
			t2=atoi(spaces[t2].next.c_str());
			l2++;
		}
		
		t1=s1,t2=s2;
		if(l1>l2){
			int d=l1-l2;
			for(int i=0;i<d;i++){
				t1=atoi(spaces[t1].next.c_str());
			}
		}else{
			int d=l2-l1;
			for(int i=0;i<d;i++){
				t2=atoi(spaces[t2].next.c_str());
			}
		}
		
		while(t1!=t2&&t1!=-1&&t2!=-1){
			t1=atoi(spaces[t1].next.c_str());
			t2=atoi(spaces[t2].next.c_str());
		}
		
		if(t1==-1){
			printf("-1\n");
		}else{
			printf("%d\n",t1);
		}
	}
	return 0;
}
