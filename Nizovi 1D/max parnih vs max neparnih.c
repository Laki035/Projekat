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
void max_parni_vs_max_neparni(int n,int a[])
{
    int m,i,mp=a[0],mn=a[1];
    for(i=2;i<n;i+=2)
    {
        if(a[i]>mp)
            mp=a[i];
    }
    for(i=3;i<n;i+=2)
    {
        if(a[i]>mn)
            mn=a[i];
    }
    if(mp==mn)
        printf("maximumi su jednaki");
    else
        if(mp>mn)
            printf("veci je maximum parnih");
        else
            printf("veci je maximum neparnih");
}
void main()
{
    int n;
    printf("unesi koliko ima elemenata niza\n");
    scanf("%d",&n);
    int a[n];
    unos_niza(a,n);
    ispis_niza(a,n);
    max_parni_vs_max_neparni(n,a);
}
