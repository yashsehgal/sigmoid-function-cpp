/* including libraries for c++ program */
#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>
using namespace std;    /* using the namespace method */

/*
    This is an example program of using Sigmoid function using C++
    We will be using Object Oriented Programming methods by creating a Class System of Objects
    having pointer functions for neural value processing and mathematical computations.
*/

class SigmoidNeuronExample {
  private:
    double arrayOfInputs[10];
    double arrayOfBiasedValues[10];
    double arrayOfWeights[10];
    double arrayOfSigmoid[10];
    double arrayOfOutputs[10];
  public:
    double generateInputValues(void) {
        /* here we will generate random values for inputs */
        /* generating random values by creating a function to create those values */
        srand(time(NULL));     // setting time as NULL
        double inputSeed = rand() % 100 + 1;
        for (int i = 0; i < 10; i++) {
            arrayOfInputs[i] = inputSeed;
        }
    }
    double generateBiasValues(void) {
        /* here we will generate random bias values */
        srand(time(NULL));
        double biasValue = rand() % 100 + 1;
        for (int i = 0; i < 10; i++) {
            arrayOfBiasedValues[i] = biasValue;
        }
    }
    double generateWeightValues(void) {
        /* here we will generate random weight values */
        srand(time(NULL));
        double weightValue = rand() % 100 + 1;
        for (int i = 0; i < 10; i++) {
            arrayOfWeights[i] = weightValue;
        }
    }
    double sigmoidFunction(void) {
        /* generating functional math values using sigmoid function */
        for (int i = 0; i < 10; i++) {
            /* computing mathematical exponential values */
            arrayOfSigmoid[i] = 1 / (1 + exp(-(arrayOfInputs[i] * arrayOfWeights[i] + arrayOfBiasedValues[i])));
        }
    }
    double setComputedValues(void) {
        /* initialising generated sigmoid values into the output array */
        for (int i = 0; i < 10; i++) {
            arrayOfOutputs[i] = arrayOfSigmoid[i];
        }
    }
    void getComputedResults(void) {
        cout << "Generated Results> " << endl;
        for (int i = 0; i < 10; i++) {
            cout << "Computaion >" << arrayOfOutputs[i] << endl;
        }
    }
};

int main() {
    SigmoidNeuronExample sigmoidNeuron;
    sigmoidNeuron.generateInputValues();
    sigmoidNeuron.generateBiasValues();
    sigmoidNeuron.generateWeightValues();
    sigmoidNeuron.sigmoidFunction();
    sigmoidNeuron.setComputedValues();
    sigmoidNeuron.getComputedResults();
    return 0;
}
