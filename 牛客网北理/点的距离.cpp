#include<iostream>
#include<cmath>
using namespace std;

class CPoint {
	public:
		int x;
		int y;
		double operator-(const CPoint p) {
			return sqrt((double)(this->x-p.x)*(this->x-p.x)+(this->y-p.y)*(this->y-p.y));
		}
};

int main() {
	int m;
	CPoint p1,p2;
	cin>>m;
	for(int i=0; i<m; i++) {
		cin>>p1.x>>p1.y>>p2.x>>p2.y;
		printf("%.2lf\n",p1-p2);
	}
	return 0;
}
