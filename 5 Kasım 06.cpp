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
	scanf("%f",&ptr->b);  //pointer �zerinden bir degi�ken ula�mak i�in //ptr nin g�sterdi�i adresteki b degeri
	
	printf("\n-------------\n");
	printf("%d\t%.2f",(*ptr).a,ptr->b);
	return 0;
}
