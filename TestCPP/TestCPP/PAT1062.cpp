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
	int type;//0��ʥ�ˣ�1�Ǿ��ӣ�2�����ˣ�3��С��
	int all;
};
bool compare(man a, man b)//true a��
{
	if (a.type<b.type)//�ȱȽ����
	{
		return true;
	}
	else if (a.type>b.type)
	{
		return false;
	}
	else
	{
		if (a.all > b.all)//Ȼ��Ƚ��ܷ�
		{
			return true;
		}
		else if (a.all < b.all)
		{
			return false;
		}
		else
		{
			if (a.vritue>b.vritue)//Ȼ��Ƚ�vritue����
			{
				return true;
			}
			else if (a.vritue < b.vritue)
			{
				return false;
			}
			else
			{
				if (a.no < b.no)//���ȽϺ��룬����
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
	freopen("a.txt", "r", stdin);//��������ض���
	freopen("b.txt", "w", stdout);
#endif
	int a, b, c;
	man zero[1001], first[1001], second[1001], third[1001];	
	while (cin >> a >> b >> c)
	{
		int czero = 0, cfirst = 0, csecond = 0, cthird = 0;
		//����
		for (int i = 1; i <= a; i++)
		{
			man a;
			cin >> a.no >> a.vritue >> a.talent;
			a.all = a.vritue + a.talent;
			if (a.talent < b || a.vritue < b)//���ֳ��Ƿ���Ҫ����
			{
				continue;
			}
			else if (a.vritue >= c&&a.talent >= c)//���ֳ��Ƿ���ʥ��
			{
				a.type = 0;
				zero[++czero] = a;
			}
			else if (a.vritue >= c&&a.talent < c)//���ֳ��Ƿ��Ǿ���
			{
				a.type = 1;
				first[++cfirst] = a;
			}
			else if (a.vritue >= a.talent)//���ֳ��Ƿ�������
			{
				a.type = 2;
				second[++csecond] = a;
			}
			else//ֻ����С����
			{
				a.type = 3;
				third[++cthird] = a;
			}
		}
		//����
		sort(zero + 1, zero + czero + 1, compare);
		sort(first + 1, first + cfirst + 1, compare);
		sort(second + 1, second + csecond + 1, compare);
		sort(third + 1, third + cthird + 1, compare);
		//���
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
