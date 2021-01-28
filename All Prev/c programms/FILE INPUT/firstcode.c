//Student Data
// name class roll age dob
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int day;int mon; int yrs;
}date;
typedef struct {
    char name[25];
    int class;
    int roll;
    int age;
    date dob;
}stud;
void take(stud *s)
{
    printf("Enter the Details of the student : \n");
    printf("Name : ");
    gets((*s).name);
    fflush(stdin);
    printf("Class : ");
    scanf("%d",&(*s).class);
    printf("Roll No. : ");
    scanf("%d",&(*s).roll);
    printf("Age : ");
    scanf("%d",&(*s).age);
    printf("Date of Birth : ");
    scanf("%d %d %d",&(*s).dob.day,&(*s).dob.mon,&(*s).dob.yrs);

};
void out(stud s)
{
    printf("Enter the Details of the student : \n");
    printf("Name : %s\nClass : %d\nRoll No. : %d\nAge : %d\nDate of birth : %d/%d/%d",s.name,s.class,s.roll,s.age,s.dob.day,s.dob.mon,s.dob.yrs);
};
void build(char *s,stud st)
{
    char str[2]={'0','\0'};
    strcat(s,"Name : ");
    strcat(s,st.name);
    strcat(s,"\nClass : ");
    str[0]=(char)st.class;
    strcat(s,str);
    strcat(s,"\nRoll No. : ");
    str[0]=(char)st.roll;
    strcat(s,str);
    strcat(s,"\nAge : ");
    str[0]=(char)st.age;
    strcat(s,str);
    strcat(s,"\nDOB : ");
    str[0]=(char)st.dob.day;
    strcat(s,str);
    strcat(s,"/");
    str[0]=(char)st.dob.mon;
    strcat(s,str);
    strcat(s,"/");
    str[0]=(char)st.dob.yrs;
    strcat(s,str);
    strcat(s,"\n");
}
int main()
{
    // FILE * fp;int i=0;
    char data[1000];
    stud s1;
    // fp=fopen("students.txt","r");
    // if(fp==NULL)
    // {
        // printf("The File can not open.");
        // exit(1);
    // }
    take(&s1);
    // out(s1);
    build(data,s1);
    
    printf("%s",data);
    return 0;
}