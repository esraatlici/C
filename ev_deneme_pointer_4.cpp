#include<stdio.h>
void swap(int*,int*);

int main()
{
	int a,b;
	printf("Enter two int: \n");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("%d\n%d\n",a,b);
	return 0;
}

void swap(int *f,int *s)
{
	int temp;
	temp=*f;
	*f=*s;
	*s=temp;
}
