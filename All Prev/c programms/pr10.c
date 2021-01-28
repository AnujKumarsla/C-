//  Sort three Number without useing any standard sort algorithm 
//  By basic comparision logic
#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    printf("Enter the third number : ");
    scanf("%d", &c);
    // this program  prints all three values in descending orders
    for (int n = 1; n <= 3; n++)
    {
        if (a > b)
        {
            if (a > c)
            {
                printf("the greatest number is %d\n", a);
                if (c > b)
                    a = b - 1;
                else
                    a = c - 1;
            }
            else
            {
                printf("the greatest number is %d\n", c);
                if (a > b)
                    c = b - 1;
                else
                    c = a - 1;
            }
        }
        else
        {
            if (b > c)
            {
                printf("the greatest number is %d\n", b);
                if (c > a)
                    b = c - 1;
                else
                    b = a - 1;
            }
            else
            {
                printf("the greatest number is %d\n", c);
                if (b > a)
                    c = a - 1;
                else
                    c = b - 1;
            }
        }
    }
    // this program only prints the greatest values
    /*if(a>b)
    {
        if(a>c)
            printf("the greatest number is %d",a);
        else
            printf("the greatest number is %d",c);
        
    }
    else
    {
        if(b>c)
            printf("the greatest number is %d",b);
        else
            printf("the greatest number is %d",c);
        
    }*/

    return 0;
}
