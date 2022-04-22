#include <stdio.h>
#include <stdlib.h>
void minimum()
{
    int x,y,z;
    printf("unesite brojeve x,y,z\n");
    scanf("%d%d%d",&x,&y,&z);
    if((x<y)&&(x<z))
        printf("najmanji broj od unetih brojeva %d %d %d je %d",x,y,z,x);
    else
        if((y<x)&&(y<z))
            printf("najmanji broj od unetih brojeva %d %d %d je %d",x,y,z,y);
        else
            printf("najmanji broj od unetih brojeva %d %d %d je %d",x,y,z,z);
}
void main()
{
    minimum();
}
