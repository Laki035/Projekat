#include<stdio.h>
#include<stdlib.h>
void unos_niza(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
         printf("unesi %d. element niza\n",i+1);
         scanf("%d",&a[i]);
    }
}
void ispis_niza(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
         printf("a[%d]=%d\t",i,a[i]);
    }
}
void prvi_negativni(int n,int a[])
{
    int m,i,indikator=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            printf("a[%d]=%d\t",i,a[i]);
            indikator=1;
            break;
        }
    }
     if(indikator==0)
            printf("u unetom nizu nema elemenata koji su negativni");
}

void main()
{
    int n;
    printf("unesi koliko ima elemenata niza\n");
    scanf("%d",&n);
    int a[n];
    unos_niza(a,n);
    ispis_niza(a,n);
    prvi_negativni(n,a);
}
