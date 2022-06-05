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
void prvi_dva_pozitivna(int n,int a[])
{
    int m,i,j,t,b=2;
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            printf("%d ",a[i]);
            b--;
        }
        if(b==0)
            break;
    }
    if(b==2)
        printf("nema u nizu pozitivnih brojeva");
}
void main()
{
    int n;
    printf("unesi koliko ima elemenata niza\n");
    scanf("%d",&n);
    int a[n];
    unos_niza(a,n);
    ispis_niza(a,n);
    prva_dva_pozitivna(n,a);
}
