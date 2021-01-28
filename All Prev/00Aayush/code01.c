// write a program to calculate salary
#include<stdio.h>
#include<conio.h>

int main(){
    int sal=0, yos=0;
    char gen,qual;

    printf("Enter the Gender(M/F) : ");
    scanf("%c", &gen);
    
    printf("Enter the Year of salary : ");
    scanf("%d", &yos);

    printf("\nEnter the Qualifications(P/G) : ");
    scanf("%c", &qual);

    if(gen=='M'){
        if(qual=='P'){
            if(yos>=10){
                sal=15000;
            }
            else{
                sal=10000;                
            }
        }
        if(qual=='G'){
            if(yos>=10){
                sal=10000;
            }
            else{
                sal=7000;
            }
        }
    }
    else{
        if(qual=='P'){
            if(yos>=10){
                sal=12000;
            }
            else{
                sal=10000;                
            }
        }
        if(qual=='G'){
            if(yos>=10){
                sal=9000;
            }
            else{
                sal=7000;
            }
        }
    }
    printf("The Salary is : %d", sal);
    return 0;
}