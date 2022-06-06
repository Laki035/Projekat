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
void ispis_niza(int n,int a[],char k)
{
    int i;
    printf("\n");
    for(i=0;i<n;i++)
    {
         printf("%c[%d]=%d\t",k,i,a[i]);
    }
}
void sortiraj_rastuce(int n, int a[n])
{
     int  i,j,t;
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
void podeli_nasumicno(int n,int a[],int b[],int c[])
{
    int i,j,b1=0,b2=0;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            b[b1]=a[i];
            b1++;
        }
        else
        {
            c[b2]=a[i];
            b2++;
        }
    }
}
void main()
{
    int n;
    printf("unesi koliko ima elemenata niza\n");
    scanf("%d",&n);
    int a[n],b[n/2],c[n/2];
    unos_niza(a,n);
    podeli_nasumicno(n,a,b,c);
    ispis_niza(n,a,'a');
    ispis_niza(n/2,b,'b');
    ispis_niza(n/2,c,'c');
}
