/*
* Implementation of the Neural Network Class 
*/

// Includes 
#include <iostream> 
#include "../include/NeuralNetwork.h" 

NeuralNetwork::NeuralNetwork(std::vector<int> topology)
{
    this->topology = topology; 
    this->topologySize = topology.size();
    for(int i=0;i<topologySize;++i)
    {
        Layer *l = new Layer(topology.at(i)); 
        this->layers.push_back(l);
    }
    for(int i=0; i<(topologySize-1);++i)
    {
        Matrix *m = new Matrix(topology.at(i),topology.at(i+1)); 
        this->weightMatrices.push_back(m); 
    } 
}

void 
NeuralNetwork::