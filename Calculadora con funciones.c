#include <stdio.h>
#include <math.h>

void captura(int *cant1, int *cant2, int *opcion);
void calcula(int op, int cant1, int cant2, float *res1, float *res2);
void muestra(int op, int cant1, int cant2, float res1, float res2);

int main()
{
    int canti1, canti2, opcion;
    float res1, res2;
    captura(&canti1, &canti2, &opcion);
    calcula(opcion, canti1, canti2, &res1, &res2);
    muestra(opcion, canti1, canti2, res1, res2);
}

void captura(int *cant1, int *cant2, int *op)
{
    printf("Dame la 1era. cantidad: ");
    scanf("%d", cant1);
    printf("Dame la 2da. cantidad: ");
    scanf("%d", cant2);
    printf("Que operacion deseas hacer?\n 1.Suma\n 2.Resta\n 3.Multiplicacion\n 4.Division\n 5.potencia\n 6.Modulo\n 7.Raiz cuadrada\n");
    scanf("%d", op);
}

void calcula(int op, int cant1, int cant2, float *res1, float *res2)
{
    switch(op)
    {
        case 1: *res1 = cant1 + cant2;
            break;
        case 2: *res1 = cant1 - cant2;
            break;
        case 3: *res1 = cant1 * cant2;
            break;
        case 4: *res1 = cant1 / cant2;
            break;
        case 5: *res1 = pow(cant1, cant2);
            break;
        case 6: *res1 = cant1 % cant2;
            break;
        case 7: *res1 = sqrt(cant1);
                *res2 = sqrt(cant2);
            break;
    }
}

void muestra(int op, int cant1, int cant2, float res1, float res2)
{
    int cont=0;
    if(op>0 && op <7 )
         printf("El resultado es: %.2f\n", res1);
         else
            if(op = 7)
                printf("El resultado es: %.2f y %.2f\n", res1, res2);
        captura(cant1, cant2, op);
        calcula(op, cant1, cant2, res1, res2);
}
