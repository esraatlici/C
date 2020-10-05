#include<stdio.h>
#include<string.h>
int main()
{
	char dizi[30];
	char *p,temp;
	int sayac=0;
	printf("Enter: ");
	gets(dizi);
	p=dizi;
	sayac=strlen(dizi);
	//printf("%d\n",sayac);
	for(int i=0;i<sayac-1;i++)
	{
		for(int j=i+1;j<sayac;j++)
		{
		    if(*(p+i)>*(p+j))
		    {
		    	temp=*(p+i);
		    	*(p+i)=*(p+j);
		    	*(p+j)=temp;
		    	//eputs(dizi);
			}
		}
	}
	puts(dizi);
	return 0;
	
}
