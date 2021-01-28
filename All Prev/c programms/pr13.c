/* Pattern
       *
      **
     ***
    ****
   *****
  ******
 *******
********
*/
//c = no. of total lines and total number of stars OR it can be constants like 5

#include <stdio.h>
#include <conio.h>

int main()
{
    int l,b,r,c=8;
    for(r=1;r<=c;r++)
    {
        for(l=1;l<=c-r;l++)
            printf(" ");
        for(b=1;b<=r;b++)
            printf("*");
        printf("\n");
    }
    return 0;
}