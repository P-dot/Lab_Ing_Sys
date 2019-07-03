#include <stdio.h>

int main()
{
   int var_a = 5;
   //Esta es la forma para declarar una variable tipo apuntador.
   int * pointer;
   
   //el operador & se lee como "la dirección de"
   pointer = &var_a;

   printf("El valor de var_a es %d\n", var_a);
   printf("El valor de pointer es %p \n", pointer);
   //El operador * des-referencia el apuntador
   printf("El valor de var_a a través de pointer es %d\n", *pointer);
   return 0;
}
