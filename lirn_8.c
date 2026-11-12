
//#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>
#include <stdlib.h> 

int main(void)
{
   /* short var_h = 100;
    int var_i = 1024;
    long double var_ld = 0.5;
    
    printf("var_h = %d, var_i = %d, var_ld = %LF\n", var_h, var_i, var_ld); */
    int var_i = -1283;
    double var_d = -54.34675;

  //  printf ("[%10d]\n", var_i); //выделяется место 10 символов и выравнивается по правому краю
  // printf ("[%-10f]\n", var_d); //выделяется место 10 символов и выравнивается по левому краю
  //  printf ("[%12.2f]\n", var_d);
    printf ("[%#X]\n", var_i);   // отображение 16-ого числа 
    printf ("[%+.2f]\n", var_d); // отображение числа со знаком

    return 0; 
}