#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *sonraki;
};
 
int main()
{
	struct node *esra=NULL;
	esra=(struct node *)malloc(sizeof(struct node));
	esra->data=15;
	struct node *atlici=(struct node *)malloc(sizeof(struct node));
	atlici->data=20;
	
	printf("%d=>%d",esra->data,atlici->data);
	return 0;
}
