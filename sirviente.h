#pragma once
#include <string> 
#include <iostream> 
#include "robot.h" 
using namespace std; 
class Sirviente : public Robot {
	int oxido;
	public:
		Sirviente(string, string, double, double);
		bool funcionar(double&, double&, int);
		// string toString()const;
};