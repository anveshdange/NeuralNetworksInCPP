#ifndef _NEURALNETWORK_H_ 
#define _NEURALNETWORK_H_ 

// Includes 
#include <vector>
#include "Matrix.h" 
#include "Layer.h" 
/*
* Implementation of Neural Network Class 
*/
class NeuralNetwork 
{
    public:
        NeuralNetwork(std::vector<int> topology); 
        void setCurrentInput(std::vector<double> input); 
    private:
        int                    topologySize;  
        std::vector<int>       topology; 
        std::vector<Layer *>   layers; 
        std::vector<Matrix *>  weightMatrices;
        std::vector<double>    input;
}


# endif // _NEURALNETWORK_H_ 