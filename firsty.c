#include <stdio.h>

int main (void)
{
    int a = 25;
    int b = 23;
    int c = 789;
    int d = 123;
    int result;
    
    result = a - b;
    printf ("a - b = %i\n", result);

    result = b * c;
    printf ("b * c = %i\n", result);

    result = a / c;
    printf ("a / c = %i\n", result);

    result = a + b / c;
    printf ("a = b / c = %i\n", result);

    result = a + b * c;
    printf ("a + b * c = %i\n", result);

    printf("a * b + c * d = %i\n", a * b + c * d);
    
    return 0;
}