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
void aritmeticka_s_sd(int n,int a[n][n])
{
    int i,j,s=0;
    float as;
   	for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        	if(i+j==n-1)
        			s=s+a[i][j]; 
        }
    }
    as=1.0*s/n;
    printf("aritmeticka sredina elemenata na sporednoj dijagonali %.2f",as);
}

int main() 
{
    int n,m;
    printf("unesi n\n");
    scanf("%d",&n);
    int a[n][n];
    unos_matrice(n,a);
    ispis_matrie(n,a);
    aritmeticka_s_sd(n,a);
	return 0;
}