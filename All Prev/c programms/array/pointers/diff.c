#include<stdio.h>
int main()
{
 char *ptr = "GeeksQuiz";
 printf("%cn", *&*&*ptr);
 return 0;
}