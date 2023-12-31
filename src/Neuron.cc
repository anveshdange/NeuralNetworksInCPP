
/*
* Implementation of the Neuron.hpp Header 
*/

// Includes 
#include <cmath>
#include "../include/Neuron.h" 

void 
Neuron::setVal(double v)
{
    this->val = val;
    activate();
    derive(); 
    return; 
}

// Constructor
Neuron::Neuron(double val)
{
    this->val = val; 
    activate(); 
    derive();
}

// Fast Sigmoid function (Activation Function) 
// f(x) = x / (1+ |x|) 
void 
Neuron::activate()
{
    this->activatedVal = this->val / (1+ std::abs(this->val)); 
    return; 
} 

// Derivative for Fast Sigmoid Function 
// f'(x) = f(x)  * (1 - f(x)) 
void 
Neuron::derive()
{
    this->derivedVal = this->activatedVal * (1- this->activatedVal); 
    return;
}