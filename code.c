#include <stdio.h>
#define N 20

int main(int argc, char *argv[])
{
    int edad = N;
    
    char nombre[10] = "Héctor";

    printf("Escriba su nombre: ");
    scanf("%s", nombre);//El nombre de la variable de tipo cadena actua como un puntero
    printf("Escriba su edad: ");
    scanf("%d", &edad);//si no es array, entonces necesitamos &, para pasar el valor de memoria   
    printf("%s %d \n", nombre, edad); // %d decimal - %s string
    printf("Hola %s su edad es %d \n", nombre, edad);
    

    return 0;
}

