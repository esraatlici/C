#include<stdio.h>
int main()
{
	int var1=1,var2=2;
	const int*ptr=&var1;
	printf("ptr: %d\n",*ptr);
	ptr=&var2;
	//*ptr=1;
	printf("prt: %d\n",*ptr);
}
