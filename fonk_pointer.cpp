#include<stdio.h>
int substract(int x,int y)
{
	return x-y;
}
int main()
{
	int (*substractptr)(int,int);
	substractptr=&substract;
	int z=substract(10,3);
	printf("Substract gives: %d\n",z);
}
