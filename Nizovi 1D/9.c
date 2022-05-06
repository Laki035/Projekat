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
void sortiraj_opadajuce(int a[],int n)
{
         printf("a[%d]=%d\n",i,a[i]);
}
void sortiraj_rastuce(int a[],int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            {
                if(a[j]<a[i])
                    {
                        t=a[i];
                        a[i]=a[j];
                        a[j]=t;
                    }
            }
}
void main()
{
    int n;
    printf("unesi koliko ima elemenata niza\n");
    scanf("%d",&n);
    int a[n];
    unos_niza(a,n);
    ispis_niza(a,n);
    printf("\n niz posle sortirasnja\n");
    sortiraj_opadajuce(a,n);
    ispis_niza(a,n);
}
