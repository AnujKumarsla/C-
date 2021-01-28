#include <stdio.h>
#include <conio.h>

struct student
{
    char name[20];
    int age,rollno;
};

int main()
{
    struct student s1,s2;
    printf("enter the name of the student : ");
    gets(&s1.name[0]);    
    printf("enter the age of the student : ");
    scanf("%d",&s1.age);
    printf("enter the rollno. of the student : ");
    scanf("%d",&s1.rollno);
    
    printf("\nenter the name of the student2 : ");
    gets(&s2.name[0]);  
    printf("enter the age of the student : ");
    scanf("%d",&s2.age);
    printf("enter the rollno. of the student : ");
    scanf("%d",&s2.rollno);

    printf("\tStudents Bio Data\n");

    printf("Student1 name=%s age=%d rollno.=%d\n",s1.name,s1.age,s1.rollno);
    printf("Student2 name=%s age=%d rollno.=%d",s2.name,s2.age,s2.rollno);
    getch();
    return 0;
}