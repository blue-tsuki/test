#include<stdio.h>
int main()
{
	int a,b,i;
	int sum = 0;
	scanf_s("%d %d",&a,&b);
	for (i = a; i < b + 1; i++)
	{
		int sum = 0;
		for (int n=1; n < i; n++)
		{
			if (i % n == 0) sum += n;
			
		
		}
		if (sum == i)printf("%d\n", i);
	}
	return 0;
}