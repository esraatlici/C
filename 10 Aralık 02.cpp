#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct lnode{
	int data;
	struct lnode* next;
}StackList;
StackList* iter=NULL;

void push(int data)
{
	if(iter==NULL)//stack bos ise
	{
		iter=(StackList*)malloc(sizeof(StackList));
		iter->next=NULL;
		iter->data=data;
	}
	else{//stack bos degilse
		StackList* yeni=(StackList*)malloc(sizeof(StackList));
		yeni->next=NULL;
		yeni->data=data;
		iter=yeni;
	}
}
int pop()
{
	if(iter==NULL) return -1;
	int result=iter->data;
	StackList* temp=iter;
	iter=iter->next;
	free(temp);
	return result;
}

void printStack()
{
	printf("\n");
	StackList *temp=iter;
	while(temp)
	{
		printf("%d _ ",temp->data);
	    temp=temp->next;
	}
}

int main()
{
	push(10);
	print
}
