#include <iostream>
#include "interfaces.h"
#include <string>
#include <fstream>

using namespace std;



int main()
{
    cout << "Hello World!" << endl;

                                                            //GIT Branch "lessons_SimppleCode".
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

   /*                                                       //Lesson 120. Processing exeptions "TRY and CATCH.Function Throw".
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
    try
    {
        show_int(-8);
    }
    catch (const string &ex)
    {
        cout<<endl<<"Sorry but nuber is not matched statement integer>0 "<<endl<<ex<<endl;
    }






    return 0;
}

