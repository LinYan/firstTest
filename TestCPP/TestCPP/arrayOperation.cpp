#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int aa[1000], bb[1000];//把数组定义在外面可以定义的更大一些
void main()
{
	memset(aa, 0, sizeof(aa));//将aa内部的内容全部初始化为0
	memcpy(bb, aa, sizeof(int)* 1000);//将aa内的1000个元素赋值到bb中

}