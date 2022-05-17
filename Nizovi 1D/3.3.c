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
int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
void kreiranje_niza_c(int a[],int n,int x)
{
    int i;
    a[0]=x;
    for(i=1;i<n;i++)
        a[i]=2*a[i-1];
}

void main()
{
    int n,x;
    printf("unesi koliko ima elemenata niza\n");
    scanf("%d",&n);
    printf("unesi broj x\n");
    scanf("%d",&x);
    int a[n];
    kreiranje_niza_c(a,n,x);
    printf("\nelementi niza a\n");
    ispis_niza(a,n);
}

