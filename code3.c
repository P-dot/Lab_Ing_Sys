#include <stdio.h>
#include <stdlib.h>
#define N 20

int main(int argc, char *argv[])
{
    if (argc != 2) {
      printf("Error\n");
      return 1;
    }
    int edad = atoi(argv[1]);
    if (edad < N) {
      printf("Joven \n");
    }else {
      printf("Viejo \n");
    }
    return 0;
}
