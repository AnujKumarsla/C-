#include<iostream>
using namespace std;

class Car{
    int price, gear, milage;
    public:
    void run(){
        cout<<"The car is running \n";
    }
    void brake(){
        cout<<"Apply Brake. Car is stopped.\n";
    }

};

class SuperCar: public Car{
    int timer, tpspeed, pwrBrake;
    public:
    void drift(){
        cout<<"The SuperCar is showing Drift..\n";
    }
    void reverse(){
        cout<<"SuperCar run in Reverse\n";
    }

};
int main(){
    Car c1;
    SuperCar s1;
    s1.run();
    s1.reverse();

    s1.brake();
    s1.drift();

    return 0;
}