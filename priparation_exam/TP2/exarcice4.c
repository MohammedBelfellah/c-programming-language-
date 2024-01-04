#include <stdio.h>
#include <math.h>
int monton;
int main()
{
    printf("entre la valeur de monton: ");
    scanf("%d", &monton);
    switch (monton)
    {
    case 1:
        printf("le person est GW");
        break;
    case 20:
        printf("le person est BM");
        break;
    default:
        printf("le monton n'a pas dana le data base ");
    }
    return 0;
}