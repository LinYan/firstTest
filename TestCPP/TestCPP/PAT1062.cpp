//it's branch master
#define LOCAL
#include <cstdio>
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
#ifdef LOCAL
	freopen("a.txt", "r", stdin);//��������ض���
	freopen("b.txt", "w", stdout);
#endif
        int a = 0;
	string b = 'abc';
	double c = 0;
	return 0;
}
