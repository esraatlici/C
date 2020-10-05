#include<stdio.h>
int main()
{
	int first,second,*f,*s,sum;
	printf("Enter two int:\n");
	scanf("%d%d",&first,&second);
	f=&first;s=&second;
	sum=*f+*s;
	printf("Sonuc: %d",sum);
	return 0;
}
