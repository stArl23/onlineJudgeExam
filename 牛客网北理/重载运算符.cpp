#include<iostream>
#include<cmath>
#include<cstdio>
#define PI 3.14159265
using namespace std;

class Angle {
	public:
		int value;
		Angle operator-(const Angle a1) {
			Angle a;
			a.value=this->value-a1.value;
			return a;
		}

		double sin_angle() {
			return sin((double)this->value*PI/180);
		}
};


int main() {
	int n;

	cin>>n;
	for(int i=0; i<n; i++) {
		Angle a1,a2;
		cin>>a1.value>>a2.value;
		printf("%.2lf\n",(a1-a2).sin_angle());
	}
	return 0;
}
