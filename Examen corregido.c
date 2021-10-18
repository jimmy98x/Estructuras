#include <stdio.h>
#include <string.h>

#define N 3
#define Col_Estatura 0
#define Col_Sueldo 1

void captura(int clave[N], char nombre[N][20], float datos[N][2]);
int buscaAlto(float info[N][2]);
void ordenaSueldo(int clave[N], char nombre[N][20], float datos[N][2]);
void imprime(int clave[N], char nombre[N][20], float datos[N][2]);

int main()
{
    int clave[N];
    char nombre[N][20];
    float datos[N][2];

    int posAlto;

    captura(clave, nombre, datos);
    ordenaSueldo(clave, nombre, datos);
    imprime(clave, nombre, datos);

    posAlto=buscaAlto(datos);
    printf("Nombre del empleado mas alto es: %s\n", nombre[posAlto]);
    printf("Y su estatura es: %f\n", datos[posAlto][Col_Estatura]);

    return 0;
}

void imprime(int clave[N], char nombre[N][20], float datos[N][2])
{
    int empleado;

    printf("Clave     Nombre     Estatura     Sueldo\n");

    for(empleado=0; empleado<N; empleado++)
    {
        printf("%d\t\t", clave[empleado]);
        printf("%s\t", nombre[empleado]);
        printf("%f\t", datos[empleado][Col_Estatura]);
        printf("%f\n", datos[empleado][Col_Sueldo]);
    }
}

void ordenaSueldo(int clave[N], char nombre[N][20], float datos[N][2])
{
    int i, j;
    float aux;
    int auxClave;
    char auxNombre[20];

    for(i=0; i<N-1; i++)
    {
        for(j=0; j<N-1; j++)
        {
            if(datos[j][Col_Sueldo] < datos[j+1][Col_Sueldo])
            {
                aux = datos[j][Col_Sueldo];
                datos[j][Col_Sueldo] = datos[j+1][Col_Sueldo];
                datos[j+1][Col_Sueldo] = aux;

                aux = datos[j][Col_Estatura];
                datos[j][Col_Estatura] = datos[j+1][Col_Estatura];
                datos[j+1][Col_Estatura] = aux;

                auxClave = clave[j];
                clave[j] = clave[j+1];
                clave[j+1] = aux;

                strcpy(auxNombre, nombre[j]);
                strcpy(nombre[j], nombre[j+1]);
                strcpy(nombre[j+1], auxNombre);
            }

        }
    }
}

int buscaAlto(float info[N][2])
{
    int empleado;
    float mayor = info[0][Col_Estatura];
    int posicion = 0;

    for(empleado=0; empleado<N; empleado++)
    {
        if(info[empleado][Col_Estatura] > mayor)
        {
            mayor = info[empleado][Col_Estatura];
            posicion = empleado;
        }
    }
    return posicion;
}

void captura(int clave[N], char nombre[N][20], float datos[N][2])
{
    int empleado;

    for(empleado=0; empleado<N; empleado++)
    {
        printf("Clave[%d]: ", empleado);
        scanf("%d", &clave[empleado]);

        printf("Nombre[%d]: ", empleado);
        scanf("%s", nombre[empleado]);

        printf("Estatura[%d]: ", empleado);
        scanf("%f", &datos[empleado][Col_Estatura]);

        printf("Sueldo[%d]: ", empleado);
        scanf("%f", &datos[empleado][Col_Sueldo]);
    }
}


