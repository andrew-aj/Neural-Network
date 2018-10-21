#include "pch.h"
#include "vmath.h"
#include <math.h>
#include <functional>
#include <algorithm>

using namespace std;

vector<double> vmath::vadd(vector<double> v1, vector<double> v2) {

	vector<double> returnVector = vector<double>();

	for (int x = 0; x < v1.size(); x++) {

		returnVector.push_back(v1[x] + v2[x]);

	}

	return returnVector;

}

vector<double> vmath::vsub(vector<double> v1, vector<double> v2) {

	vector<double> returnVector = vector<double>();

	for (int x = 0; x < v1.size(); x++) {

		returnVector.push_back(v1[x] - v2[x]);

	}

	return returnVector;

}

vector<double> vmath::vmul(vector<double> v1, vector<double> v2) {

	vector<double> returnVector = vector<double>();

	for (int x = 0; x < v1.size(); x++) {

		returnVector.push_back(v1[x] * v2[x]);

	}

	return returnVector;

}

vector<double> vmath::vdiv(vector<double> v1, vector<double> v2) {

	vector<double> returnVector = vector<double>();

	for (int x = 0; x < v1.size(); x++) {

		returnVector.push_back(v1[x] / v2[x]);

	}

	return returnVector;

}

double vmath::vsum(vector<double> vector) {

	double sum = 0;
	for (double x : vector)
	{
		sum += x;
	}
	return sum;

}

double vmath::vdot(vector<double> v1, vector<double> v2) {

	vector<double> inputVector = vector<double>();
	inputVector = vmul(v1, v2);

	return vsum(inputVector);

}