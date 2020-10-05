h#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

#define boyut 5

int kuyruk[boyut],front=-1,rear=-1;

void enQueue(int veri)
{
	if(front==boyut-1)
	{
		printf("\nKuyruk dolu\n");
	}
	else
	{
		front=front+1;
		rear=rear+1;
		kuyruk[rear]=veri;
	}
}

void deQueue()
{
	if(front==-1)
	{
		printf("\nKuyruk bos\n");
	}
	else
	{
		kuyruk[rear]=NULL;
		rear=front-1;
		front=front-1;  
	} 
}

void display()
{
	int i=0;
	for(i=0;i<=rear;i++)
	{
		printf("%d->",kuyruk[i]);
	}
}

int main()
{
	int secim;
	while(1==1)
	{
		printf("\n1-enQueue");
		printf("\n2-deQueue");
		printf("\nSeciminizi girin: ");
		scanf("%d",&secim);
	 
		switch(secim)
		{
			case 1:
				{
					printf("\nEklenecek sayi: ");
					scanf("%d",&secim);
					enQueue(secim);
					display();
					break;
				}
			case 2:
				{
					deQueue();
					display();
				}
		}
	}

	return 0;
}
