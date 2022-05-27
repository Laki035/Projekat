#include <stdio.h>
#include <stdlib.h>
void unos_matrice(int n, int a[n][n])
{
	int i,j;
	for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d]=",i,j) ;
            scanf("%d",&a[i][j]) ;
        }
    }
}
void ispis_matrie(int n, int a[n][n])
{
	int i,j;
	printf("\n");
	for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d]=%d\t",i,j,a[i][j]);
        }
        printf("\n");
    }
}
void ispitaj(int n,int a[n][n],int b[n])
{
    int i,j,s=0,max,indeks;
    max=a[0][0];
   	for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
        	if(i==j)
        	{
        		if(a[i][j]>max)
        		{
        			max=a[i][j];
        			indeks=i;
				}
			}
        }
    }
    printf("najveci element na glavnoj dijagonali je a[%d][%d]=%d",indeks,indeks,max);
}

int main() 
{
    int n,m;
    printf("unesi n\n");
    scanf("%d",&n);
    int a[n][n];
    int b[2*n];
    unos_matrice(n,a);
    ispis_matrie(n,a);
    ispitaj(n,a,b);
	return 0;
}