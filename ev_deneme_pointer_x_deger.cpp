#include<stdio.h>
void f1(int);
void f2(int*);
int main()
{
	int x=55;
	printf("Degeri: %d\n",x);
	f1(x);
	printf("F1'den sonra degeri: %d\n",x);
	f2(&x);
	printf("F2'den sonra degeri: %d\n",x);
	return 0;
}
void f1(int n)
{
	n=66;
	printf("F1 icinde degeri: %d\n",n);
}
void f2(int *p)
{
	*p=77;
	printf("F2 icinde degeri: %d\n",*p);
}
