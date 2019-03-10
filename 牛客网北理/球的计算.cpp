#include<iostream>
#include<cmath>
#include<cstdio>
//PI¾«¶È²»¹» 
#define PI 3.141592653
using namespace std;

int main() {
	int n;
	while(cin>>n) {
		//cin>>n;
		for(int i=0; i<n; i++) {
			int x,y,z,x1,y1,z1;
			cin>>x>>y>>z>>x1>>y1>>z1;
			double r=(double)(x1-x)*(x1-x)+(y1-y)*(y1-y)+(z1-z)*(z1-z);
			r=sqrt(r);
			printf("%.2lf %.2lf\n",r,4*r*r*r*PI/3);
		}
	}
	return 0;
}
