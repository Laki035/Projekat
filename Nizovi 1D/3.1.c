#include<stdio.h>
#include<stdlib.h>
#include<math.h>
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
         printf("%d ",a[i]);
    }
}
void sabiranje_nizova(int a[],int b[],int c[],int n)
{
    int i;
    for(i=0;i<n;i++)
        c[i]=a[i]+b[i];
}

void main()
{
    int n;
    printf("unesi koliko ima elemenata niza\n");
    scanf("%d",&n);
    int a[n],b[n],c[n];
    unos_niza(a,n);
    printf("unesi elemente niza b\n");
    unos_niza(b,n);
    printf("\nelementi niza a\n");
    ispis_niza(a,n);
    printf("\nelementi niza b\n");
    ispis_niza(b,n);
    sabiranje_nizova(a,b,c,n);
    printf("\nelemtni niza c \n");
    ispis_niza(c,n);
}

