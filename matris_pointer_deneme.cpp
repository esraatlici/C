#include<stdio.h>
int main()
{
	int a[3][2]={{1,2},{2,3},{4,5}};
	int *adresa=&a[0][0];

	for(int i=0;i<6;i++)
	{
		printf(" %d",*adresa);
		*adresa++;
	}
	return 0;
}
