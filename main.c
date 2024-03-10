#include <stdio.h>
int main()
{
    unsigned int a = 0x123456;
    a >>= 3;
    printf("%x\n", a);

    unsigned int b = 0x123456;
    b >>= 35;
    printf("%x\n", b);
    return 0;
}