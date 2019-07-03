#include <stdio.h>
#define N 20
#define MAX 3

int main(int argc, char *argv[])
{
    int edad, i;
    for (i = 0; i < MAX; ++i) {
       printf("Ingrese su edad: ");
       scanf("%d", &edad);
       if (edad < N) {
       printf("Adolescente \n");
       }else {
       printf("Joven, Madurx, o viejx \n");
       }
   }

   return 0;
}
