#include <iostream>
#include "interfaces.h"
#include <string>
#include <fstream>

//using namespace std;

                                                            //Lesson 125.Creating own namespaces.
namespace ns1
{
void ns10(){cout<<endl<<"NS1"<<endl;}
}

namespace ns2
{
void ns20(){cout<<endl<<"NS2"<<endl;}
}




int main()
{
    std::cout << "Hello World!!!" <<std::endl;

                                                            //GIT Branch "/Lessons/lscpp".

   /*                                                       //Lesson 113. Interfaces.
    driver d;
    BMW b;
    d.drive(b);
    d.stop(b);
    */

   /*                                                       //Lesson 114. Virtual and romboid inheriance.
    Car g;
    g.show_current_gear();
    g.show_factory_name();
    g.show_power();
    */

   /*                                                       //Lesson 120. Processing exceptions "TRY and CATCH.Function Throw".
   string path_to_file = "/home/oleg/programming/QT_projects/Lessons/test_file.txt";
   ifstream file;
   file.exceptions(ifstream::badbit | ifstream::failbit);
   try
   {
       cout<<endl<<"Trying opening file..."<<endl;
       file.open(path_to_file);
       cout<<endl<<"File opened successfuly."<<endl;
   }
   catch (const std::exception & ex)
   {
       cout<<endl<<ex.what()<<endl;
       cout<<endl<<"Error opening file!"<<endl;
   }
 */

                                                            //Lesson 121.Generating personal exceptions with own class exceprion.
                                                            //Lesson 122.Creaiting multiple blocks CATCH.Processing execptions./*
                                                            //lesson 123. Creating personal class "MyExceptions" for own exceptions.
                                                                //Dont pass this lesson.Compiler throw error.
{
//    try
//    {
//        show_int(1);
//    }
//    catch (const char *ex)
//    {
//        cout<<endl<<"Sorry but nuber is not matched statement integer>0 "<<endl<<ex<<endl;
//    }
//    catch(...)
//    {
//        cout<<endl<<"Sorry but your exception is undefinded."<<endl;
//    }
}
                                                            //Lesson 124.Creating data type "ENUM".
    {
//    PC pc;
//    pc.SetState(PC::EnumPC::ON);
//    std::cout<<std::endl<<pc.Getstate()<<std::endl;
//    if(pc.Getstate()== PC::EnumPC::ON || pc.Getstate() == PC::EnumPC::SLEEP )
//    {
//      std::cout<<std::endl<<"Computer power is ON"<<std::endl;
//    };
//    switch (pc.Getstate())
//        {
//        case PC::EnumPC::OFF:
//        cout<<endl<<"Your computer is off"<<endl;
//        break;

//        case PC::EnumPC::ON:
//        cout<<endl<<"Your computer is ON"<<endl;
//        break;

//        case PC::EnumPC::SLEEP:
//        cout<<endl<<"Your computer is SLEEP"<<endl;
//        break;
//        }
//    Speed car;
//    car = Speed::max;
//    cout<<endl<<car<<endl;
    }
                                                            //Lesson 125.Creating own namespace.
    {
//        ns1::ns10();
//        ns2::ns20();
    }

return 0;

}

