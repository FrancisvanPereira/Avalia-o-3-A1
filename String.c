#include <stdio.h>
#define buffer_size 3

int main(void)
{

char string[15];

    printf("Declare um Nome e Sobrenome: ");
    fgets(string, buffer_size, stdin);
    printf(string);

    return 0;
}