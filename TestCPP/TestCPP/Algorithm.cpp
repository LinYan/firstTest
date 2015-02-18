#define LOCAL
#include <cstdio>
#include <iostream>
#include <string>
#include <ctime>
using namespace std;
void main()
{
#ifdef LOCAL
	freopen("a.txt", "r", stdin);//输入输出重定向
	freopen("b.txt", "w", stdout);
#endif
	string a;
	int b = 0;
	if (b < 1e-6)//1e-6居然可以识别，就是10的-6次方
	{
		printf("%d", b);
	}
	printf("time used=%.2f\n", (double)clock() / CLOCKS_PER_SEC);//时间
	cin >> a;
	cout << a;
	printf("b= %d", b);
}