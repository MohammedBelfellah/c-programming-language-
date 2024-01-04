int sommeChiffres(int nombre)
{
    int somme = 0;
    while (nombre > 0)
    {
        somme += nombre % 10;
        nombre /= 10;
    }
    return somme;
}
int main()
{
    printf("Nombres entiers de trois chiffres divisibles par la somme de leurs chiffres :\n");
    for (int i = 100; i < 1000; ++i)
    {
        int somme = sommeChiffres(i);
        if (i % somme == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
