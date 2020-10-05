#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	p=(int*)calloc(10,sizeof(int));
	if(p==NULL)printf("yer ayrilmadi");
	printf("%d  ",p);
	printf("%d  ",*(p+4));
	free(p);
	return 0;
}
