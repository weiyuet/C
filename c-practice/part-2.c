#include <stdio.h>
#include <string.h>

int main()
{

    /* arithmetic operators */
    // + addition
    // - subtraction
    // * multiplication
    // / division
    // % modulus
    // ++ increment
    // -- decrement

    // int x = 5;
    // int y = 2;

    // float z = x / (float)y; // need to cast divisor as float or double

    // printf("%f\n", z);

    /* augmented assignment operators */
    // used to replace a statement where an operator takes a variable as one of its arguments
    // and then assigns the result back to the same variable
    // x = x + 1
    // x+=1

    int x = 10;

    x = x + 2;
    x += 2;

    x = x - 3;
    x -= 3;

    x = x % 2;
    x %= 2;

    printf("%d\n", x);

    /*accepting user input*/

    char name[25]; // bytes
    int age;

    printf("\nWhat's your name?\n");
    // scanf("%s", &age);
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    printf("How old are you?\n");
    scanf("%d", &age);

    printf("\nHello %s, how are you?\n", name);
    printf("\nYou are %d years old\n", age);

    return 0;
}