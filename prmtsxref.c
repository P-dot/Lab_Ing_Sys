#include <stdio.h>
//Apuntadores, sirven,
//Paso de parámetros por referencia 
//Uso de memoria asignada dinamicamente 
//Manejo de arreglos 

void swap (int* , int*);

int main()
{
  int var_a = 5, var_b = 3;

  printf("El valor antes de swap de var_a es %d \n", var_a);
  printf("El valor antes de swap de var_b es %d \n", var_b);

  swap(var_a, var_b);

  printf("El valor después de swap de var_a es %d \n", var_a);
  printf("El valor después de swap de var_b es %d \n", var_b);

  return 0;
}

void swap(int* p_a, int* p_b){
   int temp = * p_a;
   *p_a = *p_b;
   *p_b = temp;
   return;
}
