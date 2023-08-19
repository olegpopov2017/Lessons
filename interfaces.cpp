#include "interfaces.h"
#include <iostream>
using namespace std;

less21::less21()
{

}
void less21::say()
{
    std::cout<<"qwwerry<<endl";
}

void driver::drive(Icar &car)
{
    cout<<endl<<"drive the car"<<endl;
    car.drive_the_car();
}

void driver::stop(Icar &car)
{
    cout<<endl<<"stop the car"<<endl;
    car.stop_the_car();
}

void BMW::drive_the_car()
{
    cout<<endl<<"BMW drive!!!"<<endl;
}

void BMW::stop_the_car()
{
    cout<<endl<<"BMW stop!!!"<<endl;
}
