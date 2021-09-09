#include <stdio.h>
#include <math.h>

int main()
{
    int canti1, canti2, continuar=0;
    float  cant1, cant2, res1, res2;\
    char op;

    while(continuar != 2)
    {
        printf("Dame la 1era. cantidad: ");
        scanf("%f", &cant1);

        printf("Dame la 2da. cantidad: ");
        scanf("%f", &cant2);

        printf("Que operacion deseas hacer?\n +.Suma\n -.Resta\n *.Multiplicacion\n /.Division\n ^.potencia\n %%.Modulo\n R.Raiz cuadrada\n");
        scanf(" %c", &op);

        switch(op)
        {
            case '+': res1 = cant1 + cant2;
                break;
            case '-': res1 = cant1 - cant2;
                break;
            case '*': res1 = cant1 * cant2;
                break;
            case '/': res1 = cant1 / cant2;
                break;
            case '^': res1 = pow(cant1, cant2);
                break;
            case '%': canti1 = (int)cant1;
                    canti2 = (int)cant2;
                    res1 = canti1 % canti2;
                break;
            case 'R': res1 = sqrt(cant1);
                    res2 = sqrt(cant2);
                break;
        }

            if(op != "R")
                printf(" El resultado es: %.2f\n", res1);
            else
                if(op = "R")
                printf(" El resultado es: %.2f y %.2f\n", res1, res2);


        printf("Quieres continuar?\n 1.Si\n 2.No\n\n");
        scanf("%d", &continuar);

     }

}
