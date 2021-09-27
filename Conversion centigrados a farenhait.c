#include <stdio.h>

void ConvFarenheit(float c, float *f);

int main()
{
    float  centigrados, farenheit;

    printf("Escribe los grados centigrados: ");
    scanf("%f", &centigrados);

   ConvFarenheit(centigrados, &farenheit);

   printf("%.2f grados Centigrados son %.2f grados Farenheit: ", centigrados, farenheit);
}

void ConvFarenheit(float c, float *f)
{

    *f = (c * 9 / 5) + 32;

    return f;
}

