// Includes
#include <iostream> 
#include "../include/Neuron.h"
#include "../include/Matrix.h"

using namespace std; 

int 
main(int argc, char **argv)
{
    Neuron *n = new Neuron(0.9); 
    std::cout<<"Val: "<< n->getVal() <<std::endl; 
    std::cout<<"Activated Val: "<< n->getActivatedVal()<<std::endl;
    std::cout<<"Derieved Val: "<< n->getDerivedVal()<<std::endl;

    
    return 0;
}