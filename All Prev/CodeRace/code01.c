#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int b,int c,int d);
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d",max_of_four(a, b, c, d));
    
    return 0;
}
/*
int max_of_four(int a,int b,int c,int d)
{
    if(a>b && a>c && a>d)
        return a;
    if(b>a && b>c && b>d)
        return b;
    if(c>a && c>b && c>d)
        return c;
    if(d>a && d>b && d>c)
        return d;
}*/
int max_of_four(int a, int b, int c, int d)
{
     if((a>b)&&(a>c))
    {        
        if(a>d)
            return a;
         else
             return d;
    }
    else if((b>c)&&(b>d))
    {  
        return b; 
    }
    else if(c>d)
    { 
        return c; 
    }
    else 
        return d;
}