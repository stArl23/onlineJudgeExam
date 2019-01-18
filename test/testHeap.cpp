#include <iostream>
#include <algorithm> // make_heap(), pop_heap(), push_heap()
#include <vector>
using namespace std;


void printVector(vector<int> &num)
{
    for(int i = 0; i < num.size(); i++)
        cout<<num[i]<<" ";
    cout<<endl;
}
int main()
{
    // init
    int arr[] = {5,1,6,9,4,3};
    vector<int> num(arr,arr+6);
    printVector(num);


    // build
    make_heap(num.begin(),num.end());
    printVector(num); // 9 5 6 1 4 3 Ĭ�ϴ����


    // get the biggest number
    // ��vector�ĽǶ���ȡ��
    cout<<num[0]<<endl; // 9
    // or num.front();
    cout<<num.front()<<endl; // 9


    // delete �Ѷ���������Ԫ��
    // ����ֵΪ void 
    // ���Ѷ���Ԫ�طŵ����һ��λ����
    // ����һ��Ԫ�غ�ʣ�µ����ؽ��� heap���Ա���heap������
    pop_heap(num.begin(),num.end());
    printVector(num); // 6 5 3 1 4 9
    // vector ɾ��ĩβԪ��
    num.pop_back();
    printVector(num);


    num.push_back(7); //������vector�����ݣ�����һ��Ԫ�ص�β��
    printVector(num); // 6 5 3 1 4 7 
    push_heap(num.begin(),num.end());  // ָ����������һ��Ԫ�ؼ�����в�ʹ���������Ϊһ���µĶѡ�ע��ǰ�������һ��Ԫ�س��������Ԫ���Ѿ�����һ���ѡ�
    printVector(num);  // 7 5 6 1 4 3


    // �ж��Ƿ�Ϊ��
    //bool ret = is_heap(num.begin(),num.end());
    //cout<<ret<<endl;
    num.push_back(9);
    printVector(num);  // 7 5 6 1 4 3 9
    //cout<< is_heap(num.begin(),num.end()) <<endl;
    push_heap(num.begin(),num.end());
    printVector(num); // 9 5 7 1 4 3 6


    sort_heap(num.begin(),num.end());
    printVector(num); // 1 3 4 5 6 7 9
    
    return 0;
}
