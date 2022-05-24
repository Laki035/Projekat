#include <stdio.h>
#include <stdlib.h>
void unos_matrice(int n, int m,int a[n][m])
{
	int i,j;
	for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("a[%d][%d]=",i,j) ;
            scanf("%d",&a[i][j]) ;
        }
    }
}
void ispis_matrie(int n, int m,int a[n][m])
{
	int i,j;
	for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("a[%d][%d]=%d",i,j,a[i][j]);
        }
    }
}
void kreiraj_niz_od_matrice(int n, int m,int a[n][m],float b[m])
{
    int i,j,s=0;
    double as;
    for(j=0;j<m;j++)
    {
        for(i=0;i<n;j=i++)
        {
            s=s+a[i][j];
        }
        b[j]=1.0*s/n;
        s=0;
    }
}
void stampaj_niz(int m,float b[m])
{
    int i;
    for(i=0;i<m;i++)
        printf("%.2f",b[i]);
}
int main() 
{
    int n,m;
    printf("unesi broj redova i broj kolona matrice\n");
    scanf("%d%d",&n,&m);
    int a[n][m],
    float b[m];
    unos_matrice(n,m,a);
    ispis_matrie(n,m,a);
    kreiraj_niz_od_matrice(n,m,a,b);
    stampaj_niz(m,b);
	return 0;
}