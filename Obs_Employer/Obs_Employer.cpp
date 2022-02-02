#include <iostream>
using std::cout;
#include"c_Prsident.h"
#include"c_Manager.h"
#include"c_Worker.h"
int main()
{
    c_Prsident p;
    p.Print();
    c_Manager m;
    m.Print();
    c_Worker w;
    w.Print();
}

