#include "interfaces.h"
#include <iostream>
#include <string>
using namespace std;



                                                            //Lesson 113. Interfaces.

void driver::drive(Icar &car)                               //char "I" after class "car" says that this is from interfaces.
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
                                                             //Lesson 114.Virtual and romboid inheriance.

void Detail::show_factory_name()
{
    cout<<endl<<factory_name<<endl;
}

Detail::Detail()
{
    cout<<endl<<"Calling constructor of Detail"<<endl;
    factory_name = "tver";
}

Engine::Engine()
{
    cout<<endl<<"Calling constructor Engine"<<endl;
    Power = 0;
}

void Engine::show_power()
{
    cout<<endl<<"Power of engine is "<<Power<<endl;
};

Gearbox::Gearbox()
{
    cout<<endl<<"Calling constructor Gearbox"<<endl;
    Gear = 6;
}

void Gearbox::show_current_gear()
{
    cout<<endl<<"The current gear is "<<Gear<<endl;
}

Car::Car()
{
    cout<<endl<<"Calling constructor of CAR"<<endl;
}

                                                            //Lesson 121. Processing exeptions "TRY and CATCH.Function Throw".
                                                            //Lesson 122.Creaiting multiple blocks CATCH.Processing execptions.
                                                            //Lesson 123.Creating personal class "MyExceptions" for own exceptions.
                                                                //Dont pass lesson 123.Compiler throw error.
void show_int(int integer)
{
    if(integer<0)
    {
        throw "Your integer is less the zero.";
    }
    if (integer == 0)
    {
        throw "Your integer is zero!!!";
    }
    if (integer == 1)
    {
        throw 1;
    }
    cout<<endl<<integer<<endl;
}
                                                            //Lesson 124. Creating data type "ENUM".



