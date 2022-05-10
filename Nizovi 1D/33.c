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
         printf("a[%d]=%d",i,a[i]);
    }
}
void negativni(int a[],int n)
{
    int i,indikator=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            printf("\n ima negativni i to je element a[%d]=%d",i,a[i]);
            indikator =1;
            break;
        }
    }
    if(indikator==0)
         printf("/n nema negativnih");
}
void main()
{
    int n;
    printf("unesi koliko ima elemenata niza\n");
    scanf("%d",&n);
    int a[n];
    unos_niza(a,n);
    ispis_niza(a,n);
    negativni(a,n);
}

