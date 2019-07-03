#include <stdio.h>
//Los nombres de las variables en C funcionan como apuntadores
//a la primera posición.
int main()
{
   int vec[5] = {2, 3, 0, 1, 4};
   printf("vec[0] = %d\n", vec[0]);
   printf("vec[0] = %d\n", *vec); //Notación de arreglo.
   int* p_v = vec; //Apuntador, apunta a arreglo.
   printf("vec[1] = %d\n", p_v[1]);
   printf("vec[1] = %d\n", *(p_v + 1));
   return 0;

}
