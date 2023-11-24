#ifndef _NEURON_H_ 
#define _NEURON_H_ 

// Header files 
#include <iostream> 

class Neuron
{
    // Public varibales and functions
    public: 

        Neuron(double val); 

        // Fast Sigmoid function (Activation Function) 
        // f(x) = x / (1+ |x|) 
        void activate(); 

        // Derivative for Fast Sigmoid Function 
        // f'(x) = f(x)  * (1 - f(x)) 
        void derivative(); 

        // Getter Methods 
        double getVal(){return this -> val;}
        double getActivatedVal(){return this->activatedVal;}
        double getDerivedVal(){return this->derivedVal;}

    // Private Varibales and Functions 
    private: 
        // If value is 1.5 then activation value will be from 0-1
        double val; 
        /*
        * We generally have Activations functions which
        * will force the raw value of a neuron to fit
        * within a certain range making it easier to compute
        */
        double activatedVal; 

        /*
        * The derieved value is the approximate derivative of the Activated Value
        */
        double derivedVal; // derivative of activatedVal 
        

};

#endif 