#include <stdio.h>
#include <conio.h>

int rdln()
{
    printf("You R in rdln\n");
    return 7;
}
int mdln()
{
    printf("You R in mdln\n");
    return 5;
}

int main()
{
    printf("%d %d\n",rdln(),mdln());
    return 0;
}