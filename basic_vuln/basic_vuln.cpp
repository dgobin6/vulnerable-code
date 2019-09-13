// basic_vuln.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main(int argc)
{
	int* p; 
	p = (int *)malloc(argc * sizeof(int)); //malloc space on heap for argc number of int
	
	int counter = 0; 

	std::cout << p[0] << std::endl; //VULNERABILITY
}

//1073741824