// let total marks in each subject is 150
#include<stdio.h>
#include<conio.h>
int main()
{
    int s[5],total=0,avg,per;
    for(int i=1;i<6;i++)
    {
        printf("Enter the no. obtained in subject%d :",i);
        scanf("%d",&s[i-1]);
        total+=s[i-1];
    }
    avg=total/5;
    per=total*100/750;
    printf("The Result : \n  Total marks obtained : %d\n  Average marks obtained : %d\n  Percentage Acquired : %d",total,avg,per);
    getch();
    return 0;
}