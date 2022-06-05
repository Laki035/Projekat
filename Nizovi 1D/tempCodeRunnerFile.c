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
void index_najmanjeg_elementa_niza(int n,int a[])
{
    int m,i,indexnajmanjeg=0;
    m=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<m)
        {
            m=a[i];
            indexnajmanjeg=i;
        }
         
    }
     printf("\nnajmanji element je %d i njegov index je%d",m,indexnajmanjeg);
}

void main()
{
    int n;
    printf("unesi koliko ima elemenata niza\n");
    scanf("%d",&n);
    int a[n];
    unos_niza(a,n);
    ispis_niza(a,n);
    index_najmanjeg_elementa_niza(n,a);
}
