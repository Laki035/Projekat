#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,n,br=0;
    printf("unesi broj elemenata niza\n");
    scanf("%d",&n);
    int a[n];
    for (i=0; i<n; i++)
    {
        printf("unesi %d.element niza\n",i+1);
        scanf("%d",&a[i]);
    }
    for (i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            printf("%d\t",a[i]);
        }
      
    }
    for (i=0; i<n; i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d\t",a[i]);
        }
    }
}