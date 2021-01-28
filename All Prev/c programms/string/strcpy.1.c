
// C program to illustrate 
// strcpy() function ic C/C++ 
#include <stdio.h> 
#include <string.h> 
  
int main() 
{ 
    char str1[18] = "Hello Geeks!"; 
    char str2[] = "Anuj kumarsla karishma kaiful piyush nintin aayush"; 
    
    strcat(str1,str2);

    printf("%s\n",str1);

    return 0; 
} 