#include<iostream>
#include<cstdio>
#include<cmath>
#define PI acos(-1);
using namespace std;

int main(){
	double x0,y0,z0,x1,y1,z1;
	while(cin>>x0>>y0>>z0>>x1>>y1>>z1){
		double x=x0-x1,y=y0-y1,z=z0-z1,r=sqrt(x*x+y*y+z*z);
		double v=r*r*r*4/3*PI;
		printf("%.3lf %.3lf",r,v);
	}
	return 0;
}
