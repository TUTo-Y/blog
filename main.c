#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

int main()
{
    printf("char = %d\n", sizeof(char));
    printf("short = %d\n", sizeof(short));
    printf("int = %d\n", sizeof(int));
    printf("long = %d\n", sizeof(long));
    printf("long long = %d\n", sizeof(long long));
    printf("long int = %d\n", sizeof(long int));
    printf("long long int = %d\n", sizeof(long long int));
    printf("long = %d\n", sizeof(long));
    printf("void* = %d\n", sizeof(void*));
    printf("float = %d\n", sizeof(float));
    printf("double = %d\n", sizeof(double));
    printf("long double = %d\n", sizeof(long double));
    return 0;
}