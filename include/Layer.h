#ifndef _LAYER_H_ 
#define _LAYER_H_ 
/*
* Implementation of the Layer Class 
*/

// Includes 
#include <iostream>
#include <vector>
#include "Neuron.h"

// Class Implementation 
class Layer 
{
    public: 
        Layer(int size); 
    private: 
        int size; 
        std::vector<Neuron *> neurons; 

};

#endif // _LAYER_H_ 