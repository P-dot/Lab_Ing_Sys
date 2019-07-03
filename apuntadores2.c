#include <stdio.h>

int main()
{
    int var_a = 5, var_b = 3, var_c = 0;
    int* pointer_a;
    int* pointer_b;
    pointer_a = &var_a;
    pointer_b = &var_b;

    // var_a = var_a + var_b;

    *pointer_a = *pointer_a  + *pointer_b;

    pointer_a = &var_c;

    //a partir de aquí cuando accedamos a *pointer_a 
    //vamos a acceder a var_c de manera indeirecta

    printf("EL valor final de var_a es %d \n", var_a);

    return 0; 
}
