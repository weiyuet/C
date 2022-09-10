#include <stdio.h>

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

    int x = 5;
    int y = 2;

    float z = x / (float)y; // need to cast divisor as float or double

    printf("%f\n", z);

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

    return 0;
}