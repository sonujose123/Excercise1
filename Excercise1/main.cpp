#include <iostream>
#include "modify.h"

using namespace std;

double eval(int *pj);



int main()
{
	int limit = 100;
	int vec[limit];
	
	double maxFitness = 0.0,fitness = 0.0;
	int *bestValues;

	for(int i = 1; i < limit/2; i++){

		for(int j = 0; j < 2;j++){
			modify(vec,i,j);
			fitness = eval(vec);
			if(fitness > maxFitness){

				maxFitness = fitness;
				bestValues = intdup(vec,100);

			}
		}

	}



	cout << "Best Fitness is" << maxFitness << endl;
	cout << "Values are" << endl;
	for(int index = 0; index < 100;index++){
		cout << bestValues[index];
	}
	cout << endl;

}

