#include <stdio.h>

int main(void)
{
    /* int value = getchar(); //просит ввода с клавиатуры и присвоить значение VALUE
    int res = putchar(value); //
    printf("\n%d\n", res); */

    int value1 = getchar();
    int value2 = getchar();
    printf("%c %c\n", value1, value2);
// Если ввести 3 символа то в буфере так и будет висеть третий симол до следующего вызова 
    return 0; 
}
