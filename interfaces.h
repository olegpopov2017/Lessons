#ifndef INTERFACES_H
#define INTERFACES_H


class less21
{
public:
    less21();
    void say();
};

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
