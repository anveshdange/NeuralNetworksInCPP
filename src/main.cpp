// Includes
#include <iostream> 
#include "../include/Neuron.hpp"

using namespace std; 

int 
main(int argc, char **argv)
{
    Neuron *n = new Neuron(1000); 
    std::cout<<"Val: "<< n->getVal() <<std::endl; 
    std::cout<<"Activated Val: "<< n->getActivatedVal()<<std::endl;
    std::cout<<"Derieved Val: "<< n->getDerivedVal()<<std::endl;
    return 0;
}