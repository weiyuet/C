#include <stdio.h>
#include <stdbool.h>

int main()
{

    // This is a comment
    /* escape sequence = character combination consisting of a backslash \
    followed by a letter or comination of digits.
    They specify actions within a line or string of text.
    \n = newline
    \t = tab
    */

    printf("\"I like pizza!\" - Abraham Lincoln probably\n");
    printf("It's really good!\n");

    /* variable = Allocated space in memory to store a value.
    We refer to a variable's name to access the stored value.
    That variable now behaves as if it was the value it contains.
    BUT we need to declare what type of data we are storing.
    */

    int x;       /* declaration */
    x = 123;     // initialisation
    int y = 321; // declaration + initialisation

    int age = 21;        // integer
    float gpa = 2.05;    // floating point number
    char grade = 'C';    // single character
    char name[] = "Bro"; // array of characters

    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
    printf("Your average grade is %c\n", grade);
    printf("Your gpa is %f\n", gpa);

    // More data types in C

    char a = 'C';     // single character  %c
    char b[] = "Bro"; // array of characters %s

    float c = 3.141592;           // 4 bytes (32 bit precision) 6-7 digits %f
    double d = 3.141592653589793; // 8 bytes (64 bit precision) 15-16 digits %lf

    bool e = true; // 1 byte (true or false) %d

    char f = 120;          // 1 byte (-128 to +127) %d or %c
    unsigned char g = 256; // 1 byte (0 to 255) %d or %c

    short int h = 32767;          // 2 bytes (-32,768 to +32,767) %d
    unsigned short int i = 65535; // 2 bytes (0 to +65,535) %d

    int j = 2147483647;          // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int k = 4294967295; // 4 bytes (0 to +4,294,967,295) %u

    long long int l = 9223372036854775807;            // 8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 18446744073709551615U; // 8 bytes (0 to +18 quintillion) %llu

    // format specifier % = defines and formats a type of data to be displayed

    // %c = character
    // %s = string (array of characters)
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%-8.2f\n", item1);
    printf("Item 2: $%-8.2f\n", item2);
    printf("Item 3: $%-8.2f\n", item3);

    // constant = fixed value that cannot be altered by the program during execution

    const float PI = 3.14159;

    printf("%f\n", PI);

    return 0;
}