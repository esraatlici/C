#include<stdio.h>
#include<stdlib.h>

union foo            //bir tanesinin degeri degisitrmek hpsini etkiler
{
	int a;
	char b;
};

int main()
{
	union foo x;
	x.a=15;
	printf("x.a=%d\n",x.a);
	printf("x.b=%c\n",x.b);
	
	x.b='d';
	printf("x.a=%d\n",x.a);
	printf("x.b=%c\n",x.b);
	
	return 0;
}
