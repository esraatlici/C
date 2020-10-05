#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x=5;
	int *p=&x;
	int **q=&p;
	int ***r=&q;
	printf("%d\n",p);
	printf("%d\n",*p);
	printf("%d\n",q);
	printf("%d\n",*q);
	printf("%d\n",**q);
	printf("%d\n",r);
	printf("%d\n",*r);
	printf("%d\n",**r);
	printf("%d\n",***r);
	
	*p=6;
	printf("%d\n",x);
	
	**q=10;
	printf("%d\n",x);
	
	***r=16;
	printf("%d\n",x);
}
