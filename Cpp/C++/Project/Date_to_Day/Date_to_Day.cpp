#include<iostream>

using namespace std;
int main()
{
    int lp,day,mon,yrs;
    int a,b,c,d,total,result;
    cout<<"Enter the date : ";
    cin>>day>>mon>>yrs;
    
// =======================================
    d=day%7;
// =======================================
    a=yrs%100-1;
    b=a/4;
// ========================================
    int y=yrs/100;
    if(y%4==0)
    c=0;
    else if(y%4==1)
    c=3;
    else if(y%4==2)
    c=2;
    else
    c=1;
// ========================================

    if(mon==1)
     ;
    else if(mon==2)
    d+=3;
    else if(mon==3)
    d+=3;
    else if(mon==4)
    d+=6;
    else if(mon==5)
    d+=8;
    else if(mon==6)
    d+=11;
    else if(mon==7)
    d+=13;
    else if(mon==8)
    d+=16;
    else if(mon==9)
    d+=19;
    else if(mon==10)
    d+=21;
    else if(mon==11)
    d+=24;
    else if(mon==12)
    d+=26;

// LEAP YEAR
    lp=yrs%100;
    if(lp%4==0&&mon>2)
    d+=1;
// ========================================
    total=a+b+c+d;
    day=total%7;
// ========================================

    switch (day)
    {
    case 0: cout<<"Sunday";
        break;
    case 1: cout<<"Monday";
        break;
    case 2: cout<<"Teusday";
        break;
    case 3: cout<<"Wednusday";
        break;
    case 4: cout<<"Thursday";
        break;
    case 5: cout<<"Friday";
        break;
    case 6: cout<<"Saturday";
        break;
    default: cout<<"Result not found!";
        break;
    }
    cout<<"\n";
    
    return 0;
}