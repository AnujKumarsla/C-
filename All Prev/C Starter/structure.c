#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[20];
    int age,height;
};
struct student getst();

int main()
{
    struct student s1,s2;
    printf("Hello world!\n");
    /*printf("Enter the name of the student one : ");
    gets(s1.name);
    printf("Enter the age of the student one : ");
    scanf("%d",&s1.age);
    printf("Enter the height of the student one : ");
    scanf("%d",&s1.height);
*/
    s1=getst();
    printf("Hello world!\n");
    s2=getst();
    printf("\n\tstudent Bio Data\n");
    printf("student : %s\nage : %d\nheight : %d\nNext\n",s1.name,s1.age,s1.height);
    printf("student : %s\nage : %d\nheight : %d",s2.name,s2.age,s2.height);
    return 0;
    
}
struct student getst()
{
    struct student s;
    printf("Enter the name of the student: ");
    gets(s.name);
    printf("Enter the age of the student : ");
    scanf("%d",&s.age);
    printf("Enter the height of the student : ");
    scanf("%d",&s.height);
    return s;
}
