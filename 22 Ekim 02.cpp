#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *buffer;
	buffer=(char *)malloc(10);//sizeof yazmaya gerek yok zaten 1
	if(buffer==NULL)
	{
		printf("Malloc failed!");
		exit(1);//programdan cýkmak içim,ondan sonra kodlarý çalýþtýrmaz
	}
	printf("Buffer size: %d\n",_msize(buffer));
	strcpy(buffer,"Test Ok"); //iki paarmetre alýr birinci hedef ikincisii kaynak ikinic degeri 1.degere aktarýr yeterli alan varsa
	
	
	printf("Buffer contains: %s\n",buffer);
	
	
	if((buffer=(char *)realloc(buffer,6))==NULL)
	{
		printf("Realloc failed!");
		exit(1);
	}
	
	printf("Buffer of size after: %d\n",_msize(buffer));
	strcpy(buffer,"Test");
	printf("Buffer now contains: %s\n",buffer);
	free(buffer);
	return 0;
}
