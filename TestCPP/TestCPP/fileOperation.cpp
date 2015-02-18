#include <cstdio>
#include <iostream>
using namespace std;
void main()
{
	FILE *fin, *fout;
	fin = fopen("a.txt", "rb");
	fout = fopen("b.txt", "wb");
	int x;
	while (fscanf(fin, "%d", x))
	{
		fprintf(fout, "%d%d", x, x);
	}
	fclose(fin);
	fclose(fout);

}