#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main() {
	int x,n;
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		double y;
		scanf("%d",&x);
		if(x>=0&&x<2) {
			y=-(double)x+2.5;
			printf("y=%.1lf\n",y);
		} else if(x<4&&x>=2) {
			y=2-1.5*((double)x-3)*((double)x-3);
			printf("y=%.1lf\n",y);
		} else if(x>=4&&x<6) {
			y=(double)x/2-1.5;
			printf("y=%.1lf\n",y);
		}
	}
	return 0;
}
