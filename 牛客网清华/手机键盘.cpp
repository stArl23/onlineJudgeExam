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

	}; //�洢����ÿ��Сд��ĸʱ��Ҫ��ʱ��



	int keys[26] = {

		1, 1, 1, // a, b, c

		2, 2, 2, // d, e, f

		3, 3, 3, // g, h, i

		4, 4, 4, // j, k, l

		5, 5, 5, // m, n, o

		6, 6, 6, 6, // p, q, r, s

		7, 7, 7, // t, u, v

		8, 8, 8, 8// w, x, y, z

	}; // ����ĸ���з��飬��ȷ����һ�������������ĸ


	while(cin>>input) {
		int time=0;
		//�����ַ���
		int temp=input.at(0)-'a';
		int prev=temp;
		time+=alpha[temp];
		for(int i=1; i<input.size(); i++) {
			temp=input.at(i)-'a';
			//�жϺ�ǰһ�������Ƿ���ͬһ������
			//������ͬһ��������Ҫ�ȴ�
			if(keys[temp]==keys[prev]){
				time+=2;
			} 
			//����ͬ����ֱ�Ӱ�
			time+=alpha[temp];
			prev=temp; 
		}
		cout<<time<<endl;
	}

	return 0;
}
