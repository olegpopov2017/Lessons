#include <iostream>
#include "interfaces.h"
#include <string>
using namespace std;



int main()
{
    cout << "Hello World!" << endl;
                                                            //GIT Branch "lessons_SimppleCode".
                                                            //Lesson 113. Interfaces.
    driver d;
    BMW b;
    d.drive(b);
    d.stop(b);
                                                              //Lesson 114. Virtual and romboid inheriance.
    Car g;
    g.show_current_gear();
    g.show_factory_name();
    g.show_power();
    return 0;
}
