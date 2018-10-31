#include "pch.h"
#include "optimizers.h"
#include "activationFunctions.h"
#include <iostream>
#include <vector>
#include "vmath.h"
using namespace std;

activationFunctions activation;

double optimizers::oVal(double actual, double initial, double oSum) {

	double error = actual - initial;
	double end = -error * activation.rectder(oSum);
	return end;

}

double optimizers::hVal(double hSum, double wSum, double oVal) {

	return (activation.rectder(hSum) * wSum * oVal); 

}

double optimizers::gradient(double hSum, double actual, double initial, double oSum) {

	double output = activation.rectder(hSum);
	return (output * oVal(actual, initial, oSum));

}