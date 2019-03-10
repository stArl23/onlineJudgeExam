#include<iostream>
#include<cstdio>
using namespace std;

class CTriangle {
	public:
		int x;
		int y;

		CTriangle() {
			this->x=0;
			this->y=0;
		}

		CTriangle(int x,int y) {
			this->x=x;
			this->y=y;
		}

		CTriangle operator+(const CTriangle c1) {
			CTriangle c2;
			c2.x=this->x+c1.x;
			c2.y=this->y+c1.y;
			return c2;
		}
		
		void print(){
			printf("A(0,%d),B(0,0),C(%d,0)\n",this->y,this->x);
		}
};

int main() {
	int x,y;
	CTriangle c;
	while(cin>>y){
		if(y==0)break;
		cin>>x;
		CTriangle c3;
		c3.x=x;
		c3.y=y;
		c=c3+c;
	}
	
	c.print();
	return 0;
}
