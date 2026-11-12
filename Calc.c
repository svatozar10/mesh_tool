#include <stdio.h>
#include <stdlib.h> 

int main(void)
{
    float a, b;
    
    printf ("введите два числа!\n\n");
    
    printf ("A=");
    scanf  ("%f",&a);    
    printf ("B=");
    scanf  ("%f",&b);

    printf("\n");
    printf(" сложение   = %.2f\n",   a + b);
    printf(" вычитание  = %.2f\n",   a - b);
    printf(" умножение  = %.2f\n",   a * b);
    printf(" деление    = %.2f\n",   a / b);

    while (getchar() != '\n') {}; //очистка буфера от мусора. можно написать и без {} просто так болоее явно.
    getchar(); // пауза не работает потому что буфер съедает в конце  %.2f\n энтер и эта строчка не работает
    // system("pause");

    return 0;

}