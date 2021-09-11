#include <stdio.h>

void cicloFor(int n1, int n2);
void cicloWhile(int n1,int n2);
void cicloDoWhile(int n1, int n2);

int  main ()
{
    int num1, num2, cont;
    printf("Dame el primer numero:");
    scanf("%d", &num1);
    printf("Dame el segundo numero:");
    scanf("%d", &num2);

    cicloFor(num1, num2);
    cicloWhile(num1, num2);
    cicloDoWhile(num1, num2);
}

void  cicloFor(int n1, int n2)
{
    int cont;
    printf("Por metodo de For. \n");

    for(cont=n1+1; cont<n2; cont++)
        printf("%d ", cont);

    printf("\n\n");
}

void  cicloWhile(int n1, int n2)
{
    printf("Por metodo de While. \n");
    int cont=n1+1;
    while(cont<n2)
    {
        printf("%d ", cont);
        ++cont;
    }

     printf("\n\n");

}

void  cicloDoWhile (int n1, int n2)
{
    printf("Por metodo de Do While. \n");
    int cont=n1+1;
    do
    {
        printf("%d ", cont);
        ++cont;
    }while(cont<n2);

     printf("\n\n");

}
