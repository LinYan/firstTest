#define LOCAL
#include <cstdio>
#include <iostream>
#include <string>
#include <ctime>
using namespace std;
void main()
{
#ifdef LOCAL
	freopen("a.txt", "r", stdin);//��������ض���
	freopen("b.txt", "w", stdout);
#endif
	string a;
	int b = 0;
	if (b < 1e-6)//1e-6��Ȼ����ʶ�𣬾���10��-6�η�
	{
		printf("%d", b);
	}
	printf("time used=%.2f\n", (double)clock() / CLOCKS_PER_SEC);//ʱ��
	cin >> a;
	cout << a;
	printf("b= %d", b);
}