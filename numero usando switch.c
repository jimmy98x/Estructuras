#include <stdio.h>

int pideNum();
void imprimeNum(int n);

int main()
{
    int num;

    num = pideNum();
    imprimeNum(num);
}
int pideNum()
{
    int n;
    printf("Dame un numero entre 0 y 9: ");
    scanf("%d", &n);
    if(n>9)
        n=10;
    else
        if(n<0)
        n=-1;

    return(n);
}
void imprimeNum(int n)
{
    switch(n)
    {
        case 10: printf("Incorrecto, valor mayor a 9");
            break;
        case -1: printf("Incorrecto, valor menor a 0");
            break;
        case 0:
             printf("cero");
             break;
        case 1:
             printf("uno");
             break;
        case 2:
             printf("dos");
             break;
        case 3:
             printf("tres");
             break;
        case 4:
             printf("cuatro");
             break;
        case 5:
             printf("cinco");
             break;
        case 6:
             printf("seis");
             break;
        case 7:
             printf("siete");
             break;
        case 8:
             printf("ocho");
             break;
        case 9:
             printf("nueve");
             break;

    }

}
