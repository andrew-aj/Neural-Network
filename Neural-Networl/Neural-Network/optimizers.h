#pragma once
#include <iostream>
using namespace std;

class optimizers {

	public:
		//oVal is the value of the output neuron. Need to use this and hVal to calculate gradient between the two
		double oVal(double actual, double initial, double oSum);
		double hVal(double hSum, double weight, double oVal);
		double gradient(double hSum, double actual, double initial, double oSum);
		double momentum(double gradient, double momentum, double mu, double currVal, double last);
	
};

