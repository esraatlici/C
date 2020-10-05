#include<stdio.h>
int main()
{
	char a[15]={0,0,1,1,1,1,1,0,0,0,1,1,1,1,0};
	char *p;
	int b=15;
	int x=0,top;
	p=a;
	/*for(int i=0;i<10;i++)
	{
	   x= *(p+i) - '0';
	   top=top*10+15; 
	}*/
	while (( b= *p++ - '0') < 10)
    {
        top = top * 10 + b;
    } 
	printf("%d",top);
	return 0;

}
