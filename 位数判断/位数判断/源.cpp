#include<stdio.h>
int main()
{
	unsigned long int m;
	scanf_s("ld", &m);
	int a = 0;
	while(m)
	{
		m =m/10;
		++a;
	}
	printf("%d", a);
	return 0;
}