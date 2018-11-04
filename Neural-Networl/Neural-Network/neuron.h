#pragma once
#include <vector>
using namespace std;

class neuron
{
	public:
		vector<double> feedforward(vector<double> iNeurons, int numHNeurons, vector< vector<double> > &ihWeights);
		vector<double> activate(vector<double> &hNeuronsSum);
};

