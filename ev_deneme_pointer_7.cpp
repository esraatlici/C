#include<stdio.h>
int main()
{
	int *p,a=10;
	p=&a;
	p=NULL;
	*p=18;
	printf("%d\n",*p);
	return 0;
}
