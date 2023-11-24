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
    
    return 0;
}