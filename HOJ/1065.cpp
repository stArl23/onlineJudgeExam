#include<iostream>
#include<cstdio>
#include<cmath>
#define PI 3.1415926
using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		double x,y;
		scanf("%lf%lf",&x,&y);
		double r1=(x*x+y*y)*PI,s=0;
		printf("Property %d: This property will begin eroding in year %d.\n",(i+1),(int)((r1+100)/100));
	}
	printf("END OF OUTPUT.\n");
	return 0;
}
