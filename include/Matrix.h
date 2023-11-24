#ifndef _MATRIX_H_ 
#define _MATRIX_H_ 

// Includes 
#include <iostream> 
#include <vector>
#include <random>

/*
* Implementation of the Matrix Class
*/
class Matrix 
{
    public: 
        Matrix(int numRows, int numCols, bool isRandom); // Constructor
        Matrix *transpose(); 
        double generateRandomNumber();
        void setValue(int r, int c, double v); 
        double getValue(int r, int c); 

        // Verbose Function 
        void printToConsole();

        // Getter Methods
        int getNumRows(){ return this->numRows ;}
        int getNumCols(){ return this->numCols ;}

    private:
        int numRows; 
        int numCols; 
        std::vector<std::vector<double>> values;

};

#endif // _MATRIX_H_ 