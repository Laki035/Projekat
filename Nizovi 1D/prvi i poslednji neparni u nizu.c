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
void prvi_i_poslednji_pozitivni(int n,int a[])
{
    int m,i,j,t,indikator=0;
    for(i=0;i<n-1;i++)
        for(j=i;j<n;j++)
        {
            if(a[j]<a[i])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            printf("%d %d",a[i],a[n-1]);
            indikator=1;
            break;
        }
    }
    if(indikator==0)
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
    prvi_i_poslednji_pozitivni(n,a);
}
