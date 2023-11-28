#include <stdio.h>
#include <math.h>
int x;
int y;
int z;
int main()
{
    // get the veraible
    printf("enter la valeur de X: \n");
    scanf("%d", &x); // 2
    printf("enter la valeur de Y: \n");
    scanf("%d", &y);                    // 3
    printf("la valeur de X: %d \n", x); // 2
    printf("la valeur de Y: %d \n", y); // 3
    z = x;                              // z=2
    x = y;                              // x=3
    y = z;                              // y= 2
    printf("la valure de X apres la pernt est :%d \n", x);
    printf("la valure de Y apres la pernt est :%d \n", y);

    return 0;
}