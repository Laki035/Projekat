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

void transformacija_niza(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        if(i%2==0)
            a[i]++;
        else
            a[i]--;
}

void main()
{
    int n,x;
    printf("unesi koliko ima elemenata niza\n");
    scanf("%d",&n);
    int a[n];
    unos_niza(a,n);
    printf("niz pre transformacije niza\n");
    ispis_niza(a,n);
    transformacija_niza(a,n);
    printf("\nniz posle transformacije niza\n");
    ispis_niza(a,n);
}

