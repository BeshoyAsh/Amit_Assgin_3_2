#include <stdio.h>
#include <stdlib.h>
#include "fibo_func.h"

int main()
{
    int a;
    printf("enter your number: ");
    scanf("%d",&a);
    fib_seq(a);
    return 0;
}

