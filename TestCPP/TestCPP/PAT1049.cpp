//#define LOCAL
#include <cstdio>
#include <iostream>
#include <string>
#include <ctime>
using namespace std;
int result[1000000];
int calc(int temp)
{
	int count = 0;
	while (temp >= 10)
	{
		if (temp % 10 == 1)
		{
			count++;
		}
		temp /= 10;
	}
	if (temp == 1)
	{
		count++;
	}
	return count;
}
int containOne(int temp)
{
	int count = 0;
	while (temp >= 10)
	{
		if (temp % 10 == 1)
		{
			count++;
		}
		temp /= 10;
	}
	if (temp == 1)
	{
		count++;
	}
	return count;
}
int main()
{
#ifdef LOCAL
	freopen("a.txt", "r", stdin);//输入输出重定向
	freopen("b.txt", "w", stdout);
#endif
	int n, count = 0;
	//memset(result, 0, sizeof(int));
	result[1] = 1;
	for (int i = 2; i < 10; i++)
	{
		result[i] = 1;
	}
	count = 1;//前i个的和
	for (int i = 10; i < 500000; i++)
	{
		result[i] = calc(i) + result[i - 1];
	}
	while (cin >> n)
	{
		if (n < 500000)
		{
			cout << result[n];
		}
		else
		{
			for (int i = 500000; i <= n; i++)
			{
				result[i] = calc(i) + result[i - 1];
			}
			cout << result[n];
		}
	}

	//int n, count;
	//while (cin >> n)
	//{
	//	count = 0;
	//	for (int i = 1; i <= n; i++)
	//	{
	//		int temp = containOne(i);
	//		if (temp)
	//		{
	//			count += temp;
	//		}
	//	}
	//	cout << count << endl;
	//}
	return 0;
}