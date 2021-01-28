// Abstract Class
#include<iostream>
using namespace std;

class Person{
    class DOB{
        public:
        int date, month, year;
        DOB(int x, int y, int z){
            date=x;
            month=y;
            year=z;
        }
    };
    class Name{
        public:
        int fid, lid;
        Name(int x, int y){
            fid= x;
            lid= y;
        }
    };
    int phone[10];
    public:
    virtual void show()=0;
};
class Student: public Person{
    int sid;
    public:
    void show(){
        cout<<"show : Student\n";
    }
};
class Faculty: public Person{
    int fid;
    public:
    void show(){
        cout<<"show : Faculty\n";
    }

};


int main(){
    Student s;
    s.show();
    Faculty f;
    f.show();
    // Person p;
    return 0;
}