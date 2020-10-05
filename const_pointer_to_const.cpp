#include<stdio.h>
int main()
{
	int var1=1,var2=2;
	const int*const ptr=&var1;
	*ptr=1;
	//ptr=&var2;
	printf("%d\n",*ptr);
}
