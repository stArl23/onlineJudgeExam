#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	string input;
	int alpha[26] = {

		1, 2, 3,    // a, b, c

		1, 2, 3,    // d, e, f

		1, 2, 3,    // g, h, i

		1, 2, 3,    // j, k, l

		1, 2, 3,    // m, n, o

		1, 2, 3, 4, // p, q, r, s

		1, 2, 3,    // t, u, v

		1, 2, 3, 4 // w, x, y, z

	}; //存储输入每个小写字母时需要的时间



	int keys[26] = {

		1, 1, 1, // a, b, c

		2, 2, 2, // d, e, f

		3, 3, 3, // g, h, i

		4, 4, 4, // j, k, l

		5, 5, 5, // m, n, o

		6, 6, 6, 6, // p, q, r, s

		7, 7, 7, // t, u, v

		8, 8, 8, 8// w, x, y, z

	}; // 对字母进行分组，以确定在一个按键上面的字母


	while(cin>>input) {
		int time=0;
		//遍历字符串
		int temp=input.at(0)-'a';
		int prev=temp;
		time+=alpha[temp];
		for(int i=1; i<input.size(); i++) {
			temp=input.at(i)-'a';
			//判断和前一个按键是否在同一个区间
			//若处于同一个区间需要等待
			if(keys[temp]==keys[prev]){
				time+=2;
			} 
			//若不同区间直接按
			time+=alpha[temp];
			prev=temp; 
		}
		cout<<time<<endl;
	}

	return 0;
}
