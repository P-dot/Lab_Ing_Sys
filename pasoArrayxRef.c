#include <stdio.h>

void clear();

int main(int *)
{
    int vec[5] = {2, 3, 0, 1, 4};

    clear(vec[0])

    return 0;
}

void clear(int* vec_f)
{
    int i; 
    for(i=0; i < 5; i++)
      vec_f[i] = 0;
}
