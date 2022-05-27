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
    int i,j,s=0,indikator=0;
   	for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            s=s+a[i][j];
        }
        b[i]=s;
        s=0;
    }
     for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
            s=s+a[i][j];
        }
        b[j+n]=s;
        s=0;
    }
    for(i=0;i<n;i++)
    {
    	 if(b[i]!=b[i+n])
        {
             indikator=1;
             break;
        }	
	}
        if(indikator==1)
            printf("nisu sve iste sume");
        else
            printf("iste su sume");
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