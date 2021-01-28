#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char st[]="anuj kumars",st2[]="anuj chaudhary",st3[]="anuj kumars";
    printf("returned value  %d\n",strcmp(st,st2));
    printf("returned value  %d\n",strcmp(st,st3));
    return 0;
}
