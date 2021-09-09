#include <stdio.h>
#include <math.h>

int main()
{
    int op, canti1, canti2, continuar=0;
    float  cant1, cant2, res1, res2;

    while(continuar != 2)
    {
        printf("Dame la 1era. cantidad: ");
        scanf("%f", &cant1);

        printf("Dame la 2da. cantidad: ");
        scanf("%f", &cant2);

        printf("Que operacion deseas hacer?\n 1.Suma\n 2.Resta\n 3.Multiplicacion\n 4.Division\n 5.potencia\n 6.Modulo\n 7.Raiz cuadrada\n");
        scanf(" %d", &op);

        switch(op)
        {
            case 1: res1 = cant1 + cant2;
                break;
            case 2: res1 = cant1 - cant2;
                break;
            case 3: res1 = cant1 * cant2;
                break;
            case 4: res1 = cant1 / cant2;
                break;
            case 5: res1 = pow(cant1, cant2);
                break;
            case 6: canti1 = (int)cant1;
                    canti2 = (int)cant2;
                    res1 = canti1 % canti2;
                break;
            case 7: res1 = sqrt(cant1);
                    res2 = sqrt(cant2);
                break;
        }


        if(op>0 && op <7 )
            printf(" El resultado es: %.2f\n", res1);
         else
            if(op = 7)
                printf(" El resultado es: %.2f y %.2f\n", res1, res2);


        printf("Quieres continuar?\n 1.Si\n 2.No\n\n");
        scanf("%d", &continuar);

     }

}
