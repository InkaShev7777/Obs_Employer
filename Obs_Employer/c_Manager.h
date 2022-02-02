#pragma once
#include<iostream>
#include "c_Employer.h"
class c_Manager :
    public c_Employer
{
public:
    void Print() override
    {
        std::cout << "Manager\n";
    }
};

