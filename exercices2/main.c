#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a,*x;
    int b,*y;
    printf("the address of variable a is : %p \n",&a);
    printf("the address of variable b is : %p \n",&b);
    x=&a;
    y=&b;
    printf("the address of variable x is : %p \n",x);
    printf("the address of variable y is : %p \n",y);

    return 0;
}
