#include<stdio.h>
int main()
{
	int first=0,second=0,*p,*q,sum;
	printf(" �ki sayi gir\n");
	scanf("%d,%d",&first,&second);
	p=&first;
	q=&second;
	sum=*p+*q;
	printf(" %d\n",sum);
	return 0;
}
