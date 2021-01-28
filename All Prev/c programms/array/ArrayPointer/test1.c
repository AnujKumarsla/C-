#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
union un{
    short int a;
    char b[2];
};


int main()
{
    union  un u;
    u.b[0]=2;
    u.b[1]=3;
    printf("%d",u.a);
    //ghgfhgfhgfh

    /*ghgfhglhk
    ghgfh;k;lgk
    hghjkgjlkfg
    ghjkjghgfh
    
    ghg
    hgfh
    
    */



    printf("Hello, world!\n");
    
    return 0;
}