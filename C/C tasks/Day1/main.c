#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello World\n"); // task 2

    //char ch;                 // task 3
    //scanf("%c", &ch);
    //printf("%c\n", ch);

    int num1, num2, sum, difference, product; // task 4
    float division;

    scanf("%i %i", &num1, &num2);
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    division = num1 / num2;

    printf("sum = %i\n", sum);
    printf("difference = %i\n", difference);
    printf("product = %i\n", product);
    printf("division = %i\n", division);


    //printf("%i", sizeof(int));



    return 0;
}
