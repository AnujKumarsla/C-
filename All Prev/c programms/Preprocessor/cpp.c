#include<stdio.h>
#include <conio.h>
#include <string.h>
#define code(A) printf(A);
#define st hello
int main()
{
    printf("!hello\n");
    code("hello world\n")
    #undef code
    return 0;
}