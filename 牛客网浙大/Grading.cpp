#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio> 
using namespace std;

bool judge(float n1,float n2,float t){
	return abs(n1-n2)<=t;	
}

int main(){
	float p,t,g1,g2,g3,gj;
	while(cin>>p>>t>>g1>>g2>>g3>>gj){
		if(judge(g1,g2,t)){
			printf("%0.1f\n",(g1+g2)/2);
		}else if(!judge(g3,g2,t)&&!judge(g3,g1,t)){
			printf("%0.1f\n",gj);
		}else{
			bool f1=judge(g1,g3,t),f2=judge(g2,g3,t);
			
			if(f1&&f2){
				printf("%0.1f",max(max(g1,g2),g3));		
			}else if(f1){
				printf("%0.1f",(g1+g3)/2);
			} else if(f2){
				printf("%0.1f",(g2+g3)/2);
			}
		}
	}
	return 0;
}
