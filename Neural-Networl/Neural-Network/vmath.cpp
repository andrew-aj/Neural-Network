#include "pch.h"
#include "vmath.h"
#include <math.h>
#include <functional>
#include <algorithm>

using namespace std;

vector<double> vmath::vadd(vector<double> v1, vector<double> v2) {

	vector<double> returnVector = vector<double>(v1.size());

	transform(v1.begin(), v1.end(), v2.begin(), returnVector.begin(), plus<double>());

	return returnVector;

}

vector<double> vmath::vsub(vector<double> v1, vector<double> v2) {

	vector<double> returnVector = vector<double>(v1.size());

	transform(v1.begin(), v1.end(), v2.begin(), returnVector.begin(), minus<double>());

	return returnVector;

}

vector<double> vmath::vmul(vector<double> v1, vector<double> v2) {

	vector<double> returnVector = vector<double>(v1.size());

	transform(v1.begin(), v1.end(), v2.begin(), returnVector.begin(), multiplies<double>());
	return returnVector;

}

vector<double> vmath::vdiv(vector<double> v1, vector<double> v2) {

	vector<double> returnVector = vector<double>(v1.size());

	transform(v1.begin(), v1.end(), v2.begin(), returnVector.begin(), divides<double>());

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