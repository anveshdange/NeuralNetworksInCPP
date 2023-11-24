// Includes
#include <iostream> 
#include "../include/Neuron.h"
#include "../include/Matrix.h"

using namespace std; 

int 
main(int argc, char **argv)
{
    Matrix *m = new Matrix(3,2,true); 
    m->printToConsole();
    
    std::cout<<"-----------------------------"<<std::endl;
    
    Matrix* mT = m->transpose(); 
    mT->printToConsole(); 
    return 0;
}