/*sa dodatnom dodatnom promenljivom int tipa*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float raz_deo (float k)
{
    float rd;
    int z;
    z=k;
    rd=k-z;
    return fabs(rd);
}
void main()
{
    float x,rd;
    printf("unesi decimalni broj x\n");
    scanf("%f",&x);
    rd=raz_deo(x);
    printf("razlomljeni deo broj %f je %.6f",x,rd);
}
