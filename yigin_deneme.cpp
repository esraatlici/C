#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct lnode{
	int data;
	struct lnode* next;
}stacklist;

stacklist *iter=NULL;
void push(int veri)
{
	if(iter==NULL)
	{
		iter=(stacklist *)malloc(sizeof(stacklist));
		iter->data=veri;
		iter->next=NULL;
	}
	else{
		stacklist *yeni=(stacklist*)malloc(sizeof(stacklist));
		yeni->next=iter;
		yeni->data=veri;
		iter=yeni;
	}
}

int pop()
{
	if(iter==NULL)
	{
		printf("\nYigin bos\n");
	}
	int result=iter->data;
	stacklist *temp=iter;
	iter=iter->next;
	free(temp);
	return result;
}

void printstack()
{
	printf("\n");
	stacklist *temp=iter;
	while(temp)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
}

int main()
{
	push(10);
	printstack();
	push(20);
	printstack();
	push(30);
	printstack();
	printf("\npop> %d",pop());
	printstack();
	printf("\npop> %d",pop());
	printstack();
	printf("\npop> %d",pop());
	printstack();
	printf("\npop> %d",pop());
	printstack();
	return 0;
}

