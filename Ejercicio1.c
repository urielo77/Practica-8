#include <iostream>

void main()
{
    int par, impar, n, cont=1;
    
    printf("Dame el numero de cifras a buscar");
    scanf("%d", &n);
    printf("\nUsodel while\n");
    
    while(cont <= n)
    {
        if(cont % 2 == 0)
        {
            par = cont;
        }
        else
        {
            impar = cont;
        }
        cont++;
    }
    
    printf("el ultimo numero par es: %d\n", par);
    printf("el ultimo numero impar es: %d\n", impar);
    
    printf("\nUso do-while\n");
    cont = 0;
    
    do
    {
        if(cont % 2 == 0)
        {
            par = cont;
        }
        else
        {
            impar = cont;
        }
        cont++;
    }
    while(cont <= n);
    
    printf("el ultimo numero par es: %d\n", par);
    printf("el ultimo numero impar es: %d\n", impar);
}
