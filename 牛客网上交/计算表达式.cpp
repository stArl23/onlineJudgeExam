#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	
	double n;
	double arr[1000];
	char ch;
	while(scanf("%lf",&n)!=EOF){
		int size=0;
		arr[0]=n;
		while(scanf("%c",&ch)!=EOF&&ch!='\n'){
			double tmp;
			scanf("%lf",&tmp);
			if(ch=='+'){
				arr[++size]=tmp;
			}else if(ch=='-'){
				arr[++size]=-tmp;
			}else if(ch=='*'){
				arr[size]*=tmp;
			}else if(ch=='/'){
				arr[size]/=tmp;
			}
			
		}
		
		double sum=0;
		for(int i=0;i<=size;i++){
			sum+=arr[i];
		}
		
		cout<<sum<<endl;
	}
	return 0;
}
