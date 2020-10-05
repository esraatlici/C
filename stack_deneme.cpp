#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct lnode{
	int data;
	struct lnode* next;
}StackList;
StackList *iter=NULL;

void push(int data)
{
	if(iter==NULL)
	{
	   iter=(StackList*)malloc(sizeof(StackList));
	   iter->data=data;
	   iter->next=NULL;	
	}
	else
	{
		StackList* yeni=(StackList*)malloc(sizeof(StackList));
		yeni->data=data;
		yeni->next=iter;
		iter=yeni;
	}
}

int pop()
{
	if(iter==NULL)return -1;
	StackList* temp=(StackList*)malloc(sizeof(StackList));
	temp=iter->next;
	int result=iter->data;
	free(iter); 
	iter=temp;
	return result;
}


void printStack()
{
	StackList* temp=(StackList*)malloc(sizeof(StackList));
	temp=iter;
	while(temp)
	{
		printf("%d-> ",temp->data);
		temp=temp->next;
	}
	printf("\n");
	
}

int main()
{
	push(10);
    printStack();
    push(20);
    printStack();
    push(30);
    printStack();
    printf("\npop> %d\n",pop());
    printStack();
    printf("\npop> %d\n",pop());
    printStack();
    printStack();
    printf("\npop> %d\n",pop());
    printStack();
    printf("\npop> %d\n",pop());
    printStack();
    getch();
    return 0;
}
