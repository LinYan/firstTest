//it's branch master
#define LOCAL
#include <cstdio>
#include <iostream>
#include <string>
#include <ctime>
#include <algorithm>
using namespace std;
struct man
{
	string no;
	int vritue;
	int talent;
	int type;//0是圣人，1是君子，2是愚人，3是小人
	int all;
};
bool compare(man a, man b)//true a大
{
	if (a.type<b.type)//先比较类别
	{
		return true;
	}
	else if (a.type>b.type)
	{
		return false;
	}
	else
	{
		if (a.all > b.all)//然后比较总分
		{
			return true;
		}
		else if (a.all < b.all)
		{
			return false;
		}
		else
		{
			if (a.vritue>b.vritue)//然后比较vritue分数
			{
				return true;
			}
			else if (a.vritue < b.vritue)
			{
				return false;
			}
			else
			{
				if (a.no < b.no)//最后比较号码，递增
				{
					return true;
				}
				else
				{
					return false;
				}
			}
		}
	}
}
int main()
{
#ifdef LOCAL
	freopen("a.txt", "r", stdin);//输入输出重定向
	freopen("b.txt", "w", stdout);
#endif
	int a, b, c;
	man zero[1001], first[1001], second[1001], third[1001];	
	while (cin >> a >> b >> c)
	{
		int czero = 0, cfirst = 0, csecond = 0, cthird = 0;
		//输入
		for (int i = 1; i <= a; i++)
		{
			man a;
			cin >> a.no >> a.vritue >> a.talent;
			a.all = a.vritue + a.talent;
			if (a.talent < b || a.vritue < b)//区分出是否需要考虑
			{
				continue;
			}
			else if (a.vritue >= c&&a.talent >= c)//区分出是否是圣人
			{
				a.type = 0;
				zero[++czero] = a;
			}
			else if (a.vritue >= c&&a.talent < c)//区分出是否是君子
			{
				a.type = 1;
				first[++cfirst] = a;
			}
			else if (a.vritue >= a.talent)//区分出是否是愚人
			{
				a.type = 2;
				second[++csecond] = a;
			}
			else//只能是小人了
			{
				a.type = 3;
				third[++cthird] = a;
			}
		}
		//排序
		sort(zero + 1, zero + czero + 1, compare);
		sort(first + 1, first + cfirst + 1, compare);
		sort(second + 1, second + csecond + 1, compare);
		sort(third + 1, third + cthird + 1, compare);
		//输出
		cout << czero + cfirst + csecond + cthird << endl;
		for (int i = 1; i <= czero; i++)
		{
			cout << zero[i].no << " " << zero[i].vritue << " " << zero[i].talent << endl;
		}
		for (int i = 1; i <= cfirst; i++)
		{
			cout << first[i].no << " " << first[i].vritue << " " << first[i].talent << endl;
		}
		for (int i = 1; i <= csecond; i++)
		{
			cout << second[i].no << " " << second[i].vritue << " " << second[i].talent << endl;
		}
		for (int i = 1; i <= cthird; i++)
		{
			cout << third[i].no << " " << third[i].vritue << " " << third[i].talent << endl;
		}
	}
}
