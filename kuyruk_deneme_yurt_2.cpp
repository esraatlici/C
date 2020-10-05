#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct dugum{
	int data;
	struct dugum* next;
};
dugum* kuyruk=(struct dugum*)malloc(sizeof(struct dugum));
int size=0;

void enQueue(int veri)
{
	
	dugum* son=(struct dugum*)malloc(sizeof(struct dugum));

	if(size==0)
	{
		kuyruk->data=veri;
		kuyruk->next=NULL;
		size++;
	}
	else
	{
		son->data=veri;
		son->next=kuyruk;
		kuyruk=son;
		size++;
	}
}

int deQueue()
{
	dugum* bas=(struct dugum*)malloc(sizeof(struct dugum));
	if(size==0)printf("\nKuyruk bos\n");
    else
    {
	    bas=kuyruk;
		for(int i=0;i<size-2;i++)bas=bas->next;
		bas->next=NULL;
		free(bas->next); 
		size--;
	}
}

void display()
{
	dugum* bas=(struct dugum*)malloc(sizeof(struct dugum));
	bas=kuyruk;
	for(int i=0;i<size;i++)
	{
		printf("%d->",bas->data);
		bas=bas->next;
	}
	printf("\n");
}

int main()
{
	int secim;
	while(1==1)
	{
		printf("\n1-Eleman ekle");
		printf("\n2-Eleman sil");
		printf("\nIslem sec: ");
		scanf("%d",&secim);
		switch(secim)
		{
			case 1:
				{
					printf("Eklenecek eleman: ");
					scanf("%d",&secim);
					enQueue(secim);
					display();
					break; 
				}
				
			case 2:
				{
					deQueue();
					display();
					break;
				}
		}
	}

	return 0;
}
