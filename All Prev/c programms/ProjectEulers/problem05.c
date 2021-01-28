#include<stdio.h> 
#include<stdlib.h> 

int random(int n)
{
    int b=rand();
    return (b%n);

}
int main() 
{ 
    printf("there are 90 % chances of rain tonight");
}