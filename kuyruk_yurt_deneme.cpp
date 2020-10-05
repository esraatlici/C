#include<stdlib.h>
#include<stdio.h>

typedef struct dugum{
	int veri;
	struct dugum* sonraki;
};

dugum* kuyruk;
int size=0;

void enQueue(int data)
{
	if(size==0)
	{
		kuyruk->veri=data;
		kuyruk->sonraki=NULL;
		size++;
	}
	else 
	{
		dugum* son;
		son=kuyruk;
		for(int i=0;i<size;i++)son=son->sonraki;
		son->sonraki->veri=data;
		son->sonraki->sonraki=NULL;
	}
}
