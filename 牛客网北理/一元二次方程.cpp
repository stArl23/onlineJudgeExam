#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;
int main(){
	int a,b,c,n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c;
		
		if(a==0){
			if(b!=0){
				printf("%.2lf\n",-(double)c/b);
			}else{
				printf("-1\n");
			}
		}else{
			int d=b*b-4*a*c;
			if(d>0){
				double d1=sqrt((double)d);
				double x1=(-b-d1)/(2*a);
				double x2=(-b+d1)/(2*a);
				printf("x1=%.2lf,x2=%.2lf\n",x1,x2);
			}else if(d==0){
				double x=(-b)*1.0/(2.0*a);
				printf("x=%.2lf\n",x);
			}else{
				printf("-1\n");
			}
		}
	}
	return 0;
}
