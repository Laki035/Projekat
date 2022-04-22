#include <stdio.h>
#include <stdlib.h>
int stepen(int k, int n)
{
    int j,p=1;
    for(j=0;j<n;j++)
        p=p*k;
    return p;
}
int faktorijel(int m)
{
    int j,p=1;
    for(j=1;j<=m;j++)
        p=p*j;
    return p;
}
int main()
{
    int i,x,n;
    float s=1;
    printf("unesi broj x\n");
    scanf("%d",&x);
    printf("unesi stepen n \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        s=s+1.0*stepen(x,i)/faktorijel(i);
    printf("s=%.3f",s);
    return 0;
}
