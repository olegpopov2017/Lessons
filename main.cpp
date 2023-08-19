#include <iostream>
#include "interfaces.h"


using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    less21 ls;
    ls.say();
    driver d;
    BMW b;
    d.drive(b);
    d.stop(b);


    return 0;
}
