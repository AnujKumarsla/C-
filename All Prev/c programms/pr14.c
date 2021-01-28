/*
         *
        ***
       *****
      *******
     *********
    ***********
   *************
  ***************
 *****************
*******************
*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int r,c=9,l,b;
    /*
    l= spaces
    b= stars
    r= number of rows
    c= (number of lines and total number of stars) /2
    */
    for(r=0;r<=c;r++)
    {
        // first half
        for(l=1;l<=c-r;l++)
            printf(" ");
        for(b=1;b<=r;b++)
            printf("*");

        // middle
        printf("*");
        // second half
        for(b=1;b<=r;b++)
            printf("*");
        //next line
        printf("\n");

    }
    return 0;
}