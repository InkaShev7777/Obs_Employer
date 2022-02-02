#pragma once
#include"c_Employer.h"
#include<iostream>
class c_Prsident : public c_Employer
{
public:
	void Print() override
	{
		std::cout << "President\n";
	}
};

