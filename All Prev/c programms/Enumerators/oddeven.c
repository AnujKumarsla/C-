#include <stdio.h>
#include <conio.h>
enum bool{
    false,true
};
enum bool isEven(int n){
    if(n%2==0)
        return true;
    else
        return false;    
    
}
int main()
{
    enum bool b;
    int num;
    printf("Enter the number to check the it is oddor even : ");
    scanf("%d",&num);
    if(isEven(num))
        printf("\nThe given numbers is Even");
    else
        printf("\nThe given numbers is odd");
    return 0;
}