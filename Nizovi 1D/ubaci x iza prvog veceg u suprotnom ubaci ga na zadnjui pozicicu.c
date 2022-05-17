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
         printf("%d ",a[i]);
    }
}
void transformacija_niza(int a[],int n,int x)
{
    int i,index=n;
    for(i=0;i<n+1;i++)
    {
        if(x<a[i])
        {
            index=i+1;
            break;
        } 
    }
    if(index<n)
    {
        for(i=n+1;i>index;i--)
        {
            a[i]=a[i-1];
        }
        a[index]=x;
    }
    else
        a[index]=x;
}
void main()
{
    int n,x;
    printf("unesi koliko ima elemenata niza\n");
    scanf("%d",&n);
    printf("unesi broj x\n");
    scanf("%d",&x);
    int a[n+1];
    unos_niza(a,n);
    printf("niz pre transformacije niza\n");
    ispis_niza(a,n);
    transformacija_niza(a,n,x);
    printf("\nniz posle transformacije niza\n");
    ispis_niza(a,n+1);
}