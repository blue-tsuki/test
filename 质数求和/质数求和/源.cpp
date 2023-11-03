#include<stdio.h>
int main()
{
	int p;
	int q = 0;
	int flag = 0,n = 1;
	int vis[159];
	vis[0] = 2;
	scanf_s("%d", &p);
	for (int i = 3; i < 941; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (i % j != 0) flag = 1;
			else { flag = 0; break; }
		}
		if (flag) 
		{
			vis[n] = i;
			n += 1;
		}
	}
	for (int m = p; m < p + 11; m++)
	{
		q += vis[m - 1];
	}
	printf("%d", q);
	return 0;
}