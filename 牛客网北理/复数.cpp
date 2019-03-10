#include<iostream>

using namespace std;

class Fusu {
	public:
		int sibu;
		int xubu;

		Fusu operator+(const Fusu f1) {
			Fusu f2;
			f2.sibu=this->sibu+f1.sibu;
			f2.xubu=this->xubu+f1.xubu;
			return f2;
		}

		void print() {
			if(this->xubu>0) {
				cout<<this->sibu<<"+"<<this->xubu<<"i"<<endl;
			} else if(this->xubu==0) {
				cout<<this->sibu<<endl;
			} else {
				cout<<this->sibu<<this->xubu<<"i"<<endl;
			}
		}
};


int main() {
	int m;
	cin>>m;
	for(int i=0; i<m; i++) {
		Fusu f1,f2;
		cin>>f1.sibu>>f1.xubu>>f2.sibu>>f2.xubu;
		Fusu f3=f1+f2;
		f3.print();
	}
	return 0;
}
