#pragma once
#include "c_Employer.h"
#include<iostream>
class c_Worker :
    public c_Employer
{
public:
    void Print()override
    {
        std::cout << "Worker\n";
    }
};

