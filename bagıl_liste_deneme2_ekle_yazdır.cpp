#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

struct node* temp=NULL;
struct node* start=NULL;
struct node* q=NULL;
	struct node* eklenecek=NULL;

void ekle(int veri)
{

	eklenecek=(struct node*)malloc(sizeof(struct node));
	eklenecek->data=veri;
	eklenecek->next=NULL;
	
	
	if(start==NULL)
	{
		start=eklenecek;
	}
	else 
	{
		q=start;
		while(q->next)
		{
			q=q->next; 
		}
		q->next=eklenecek;
	}
}

void yazdir()
{
	q=start;
	while(q->next!=NULL)
	{
		printf("%d->",q->data);
		q=q->next;
	}
	printf("%d",q->data);
	printf("\n\n");
}

int main()
{
	int sayi;
	while(1==1){
	printf("Eklenecek sayiyi gir:");
	scanf("%d",&sayi);
	ekle(sayi);
	yazdir();
}
	return 0;
}
