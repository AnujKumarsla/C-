#include <stdio.h>
#include<conio.h>

int main()

{
    char g;
   
 int yos,qual,sal;
    
printf("Enter your Gender,Year of service,Qualification(G=0,PG=1)");
    
scanf("%c%d%d",&g,&yos,&qual);
    
if(g=='M' && yos>=10 && qual==1)
    
sal=15000;
    
else if((g=='M' && yos>=10 && qual==0) || (g=='M' && yos<10 && qual==1) )
    
sal=10000;
    else if(g=='M' && yos<10 && qual==0)
    
sal=7000;
    else if(g=='F' && yos>=10 && qual==1)
    
sal=12000;
    else if(g=='F' && yos>=10 && qual==0)
    
sal=9000;
    else if(g=='F' && yos<10 && qual==1)
     
sal=10000;
     else if(g=='F' && yos<10 && qual==0)
    
 sal=6000;
     printf("Salary is rs. %d",sal);
    
   
   getch();
 return 0;
}