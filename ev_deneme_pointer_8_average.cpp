#include<stdio.h>
int average(int ar[],int n)
{
	int *array_pointer,sum=0;
	array_pointer=ar;
	for(int i=0;i<5;i++)
	{
		sum+=*(array_pointer+i);
	}
	return (sum/n);
}

int main()
{
	int array[5];
	
	for(int i=0;i<5;i++)
	{
		printf("Enter five int: \n");
		array[i]=scanf("%d\n");
	}
	for(int j=0;j<5;j++) printf("%d\n",array[j]);
	int a=average(array,5);
	printf("Average is: %d",a);
	return 0;
}
