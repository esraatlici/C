#include<stdio.h>
#include<stdlib.h>

struct name{
	
	int a;
	float b;
};

int main()
{
	struct name p,*ptr;
	ptr=&p;
	printf("Enter int value: ");
	scanf("%d",&(*ptr).a);
	
	printf("Enter float value: ");
	scanf("%f",&ptr->b);  //pointer üzerinden bir degiþken ulaþmak için //ptr nin gösterdiði adresteki b degeri
	
	printf("\n-------------\n");
	printf("%d\t%.2f",(*ptr).a,ptr->b);
	return 0;
}
