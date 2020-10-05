#include<stdio.h>
int main()
{
	int i=0,j=0,k=0;
	int a[3][2]={{1,2},{3,4},{5,6}};
	int b[2][3]={{1,2,3},{4,5,6}};
	int c[3][3]={0};
	int *adresa=&a[0][0];
	int *adresb=&b[0][0];
	int *adresc=&c[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<2;k++)
			{
				 //c[i][j]+=a[i][k]*b[k][j];
				 *(adresc+(i*3)+j)+=*(adresa+(i*2)+k)**(adresb+(k*3)+(j));
			}
			
		}
	}
	
	/*for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}*/
    	for(int i=0;i<9;i++)
	{
		printf(" %d",*adresc);
		*adresc++;
	}
	return 0;
}
