#ifndef INTERFACES_H
#define INTERFACES_H
#include <string>
#include <iostream>
using namespace std;
                                                        //Lesson 113. Interfaces.

class Icar
{
public:
    void virtual drive_the_car() = 0;
    void virtual stop_the_car() = 0;
};

class BMW : public Icar
{
public:
    void drive_the_car() override;
    void stop_the_car() override;
};

class driver
{
public:
    void drive(Icar & car);
    void stop(Icar & car);
};

#endif // INTERFACES_H


                                                            //Lesson 114. Virtual and romboid inheriance.
class Detail
{
public:
    Detail();
    string factory_name;
    void show_factory_name();
};



class Engine :public virtual Detail
{
public:
    Engine();
    void show_power();
    int Power;

};

class Gearbox : public virtual Detail
{
public:
    Gearbox();
    void show_current_gear();
    int Gear;
};

class Car : public Engine , public Gearbox
{
public:
    Car();
};

                                                            //Lesson 120. Processing exeptions "TRY and CATCH.Function Throw".
