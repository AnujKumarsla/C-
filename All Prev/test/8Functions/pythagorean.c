// LIST OF PYTHOGOREAN TRIPLETS
#include<stdio.h>
#include<conio.h>

void python(int );

int main()
{
    int a;
    printf("Enter a value in a : ");
    scanf("%d",&a);
    python(a);
    return 0;
}
void python(int a )
{
    for(int h=5;h<=a;h++)
    {
        for(int p=3;p<h;p++)
        {
            for(int b=3;b<p;b++)
            {
                if( ((h*h))==((b*b)+(p*p)) )
                {
                    printf("%d = %d + %d\n",h,p,b);
                    break;
                }
            }
        }
    }
}