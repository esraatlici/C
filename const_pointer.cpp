#include<stdio.h>
int main()
{
	int var1=1,var2=2;
	int *const ptr=&var1;
	printf("ptr: %d\n",*ptr);
	//ptr=&var2;
	*ptr=11;
	printf("ptr: %d\n",*ptr);
	return 0;
}
