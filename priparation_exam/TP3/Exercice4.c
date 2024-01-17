#include <stdio.h>
int main()
{
    int i,N;
    float T[10], Nng, Pos, Nul;




    printf("entre les elemant du tableaue T\n");
    for (i = 0; i < 10; i++)
    {
        printf("T[%d]=", i + 1);
        scanf("%f", &T[i]);
    }
    Nng = 0;
    Pos = 0;
    Nul = 0;
    for (i = 0; i < 10; i++)
    {
        if (T[i] > 0)
        {
            Pos += 1;
        }
        else if (T[i] < 0)
        {
            Nng += 1;
        }
        else
        {
            Nul += 1;
        }
    }
    printf("les nombers des positife:%.2f,les nigative:%.2f et les null:%.2f", Pos, Nng, Nul);
    return 0;
}

