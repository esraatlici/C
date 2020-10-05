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

void basekle(int bveri)
{
	q=start;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=bveri;
	temp->next=start;
	start=temp;
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

void bastansil()
{
	q=start->next;
	free(start);
	start=q; 
	printf("\nbastansilindi\n");
}



void sondansil()
{
	q=start;
	while(q->next->next) 
	{
		q=q->next;
	}
	free(q->next);
	q->next=NULL;
	printf("\nsilindi\n");
}
void aradansil(int sil)
{
	struct node* onceki=NULL;
	struct node* sonraki=NULL;
	q=start;
	
	if(start->data==sil)
	{
		bastansil();
	}
	
	while(q->next->data!=sil)
	{
		q=q->next;
	}
	if(q->next==NULL)
	{
		sondansil();
	}
	onceki=q;
	sonraki=q->next->next;
	free(q->next);
	onceki->next=sonraki;
	 
}
void arayayaz(int ara)
{
	q=start;
	struct node* arayaeklenecek=(struct node*)malloc(sizeof(struct node));
	arayaeklenecek->data=ara;
	while(q->next)
	{
		if(q->data<arayaeklenecek->data)
		{
			temp=q->next;
			if(arayaeklenecek->data<temp->data)
			{
				arayaeklenecek->next=temp;
				q->next=arayaeklenecek; 
			}
		}
		q=q->next;
	}
}

int main()
{
	int sayi,sayi2,sayi3,sayi4,i=0;
	while(i<=4) {
	printf("Eklenecek sayiyi gir:");
	scanf("%d",&sayi);
	ekle(sayi);
	yazdir();
	i++;
}
    printf("Basa eklenecek sayiyi gir:");
    scanf("%d",&sayi2);
    basekle(sayi2);
    yazdir();
    
    printf("araya eklenecek sayiyi gir:");
    scanf("%d",&sayi3);
    arayayaz(sayi3);
    yazdir();
    sondansil();
    yazdir();
    bastansil();
    yazdir();
    printf("Aradan hangisi silinsin:");
    scanf("%d",&sayi4);
    aradansil(sayi4);
    yazdir();
	return 0;
}
