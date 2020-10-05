#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *altKatar(char *str,int,int);
char *alt;

int main()
{
	int i;
	char *s, *parca;
	s="programlama";
	for(i=0;i<strlen(s);i++)
	{
		parca=altKatar(s,0,i);
		printf("Adres: %p\t deger: %s\t",parca,parca); //\t tab kadar bosluk býrakr
		printf("\n\n");
		free(parca);
	}
	return 0;
}


char *altKatar(char *str,int p1,int p2)
{
	int i,j=0,n;
	n=p2-p1;
	alt=(char *)calloc(n+1,sizeof(char)); //+1 null için
	for(i=p1;i<=p2;i++)
	{
		alt[j++]=str[i];
	}
	alt[j]='\0';
	//printf("%s",alt);
	return alt;
}
