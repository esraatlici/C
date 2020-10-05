#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>

typedef struct lnode{
	int data;
	struct lnode* next;
};
struct lnode* root;
int size=0;

int deQueue()
{
	int i;
	if(size==0)return -1;
	
	if(size==1)
	{
		int result=root->data;
		root=NULL;
		size--;
		return result;
	}
	struct lnode* iter;
	iter=root;
	for(i=0;i<size-2;i++)iter=iter->next;
	struct lnode* temp=iter->next;
	int result=iter->next->data;
	iter->next=NULL;
	free(temp);
	size--;
	return result;
}

void enQueue(int data)
{
	if(size==0)
	{
		root=(struct lnode*)malloc(sizeof(struct lnode*));
		root->data=data;
		root->next=NULL;
		size++;
	}
	else{
		struct lnode* iter=(struct lnode*)malloc(sizeof(struct lnode));
		iter->data=data;
		iter->next=root;
		size++;
		root=iter;
	}
}

void printQueue()
{
	struct lnode* iter;
	int i;
	iter=root;
	printf("\n");
	for(i=0;i<size;i++)
	{
		printf("%d->",iter->data);
		iter=iter->next;
	}
}

int main()
{
	enQueue(10);
	printQueue();
	enQueue(20);
	printQueue();
	enQueue(30);
	printQueue();
	int a=deQueue();
	printf("\n%d silindi",a);
	int b=deQueue();
	printf("\n%d silindi",b);
	int c=deQueue();
	printf("\n%d silindi",c);
	int d=deQueue();
	printf("\n%d silindi",d);
	printQueue();
	return 0;
}
