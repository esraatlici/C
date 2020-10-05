#include<stdio.h>
int main()
{
	int *p,a=10;
	char *c,b='d';
	double *d,f=2.34;
	p=&a;c=&b;d=&f;
	printf("%d\n",p);
	printf("%d\n",p=p+2);
	printf("%d\n",c);
	printf("%d\n",c=c+5);
	printf("%d\n",d);
	printf("%d\n",++d);
	return 0;
}
