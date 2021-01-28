#include <stdio.h>
#include <conio.h>

int main()
{
    char stud[3][4][10];
    for(int s=0;s<3;s++)
    {
        printf("Enter the student details of student %d\n",s);
        for(int col=0;col<4;col++)
        {
            gets(stud[s][col]);

        }
    }
    for(int s=0;s<3;s++)
    {
        printf("Saved details of student %d\n",s);
            printf("\tName %s Title %s Course %s City %s",stud[s][0],stud[s][1],stud[s][2],stud[s][3]);
        printf("\n");
    }
    return 0;
}