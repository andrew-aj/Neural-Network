#include "pch.h"
#include "neuron.h"
#include "activationFunctions.h"
#include "vmath.h"
#include <vector>
#include <iostream>
using namespace std;

activationFunctions activation;
vmath vm;

//Input the Input Neurons, number of Hiddle Neurons, and the 2d vector of weights
//Value h (row) is hidden neuron, value k(column) is input neuron
vector<double> neuron::feedforward(vector<double> iNeurons, int numHNeurons, vector< vector<double> > &ihWeights) {

	vector<double> hNeuronsSum = vector<double>();
	for (int h = 0; h < 10; h++) {
		vector<double> nWeight = vector<double>();
		for (int k = 0; k < ihWeights[h].size(); k++) {
			double weight = ihWeights[h][k];
			nWeight.push_back(weight);
		}

		double hNeuron = vm.vdot(nWeight, iNeurons);
		hNeuronsSum.push_back(hNeuron);
		

	}
	return hNeuronsSum;

}

vector<double> neuron::activate(vector<double> &hNeuronsSum) {

	vector<double> hNeuronsOut = vector<double>();

	for (int x = 0; x < hNeuronsSum.size(); x++) {

		double input = hNeuronsSum[x];
		double output = activation.rectified(input);
		hNeuronsOut.push_back(output);

	}

	return hNeuronsOut;

}