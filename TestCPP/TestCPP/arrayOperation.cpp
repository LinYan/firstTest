#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int aa[1000], bb[1000];//�����鶨����������Զ���ĸ���һЩ
void main()
{
	memset(aa, 0, sizeof(aa));//��aa�ڲ�������ȫ����ʼ��Ϊ0
	memcpy(bb, aa, sizeof(int)* 1000);//��aa�ڵ�1000��Ԫ�ظ�ֵ��bb��

}