#include <stdio.h>
#include <conio.h>
enum month
{
    jan,feb,mar,apr,may,jun,july,aug,sep,oct,nov,dec
};
typedef enum month mon;
int main()
{
    enum month m1,m2;
    mon m3;
    m3=sep;
    m1=jun;
    m2=(enum month) 6;
    printf("%d\n",m1);
    printf("%d\n",m3);
    printf("%s\n",m2);
    return 0;
}