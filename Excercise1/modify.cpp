#include "modify.h"
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

const int limit = 100;

int modify(int *vec,int divCount,bool isEvenPosOne){


	int blockItems = limit/divCount;

	for(int i = 0; i < divCount; i++)
	{
		for(int j = blockItems * i ;j < blockItems * (i+1) ;j++){

			if(i%2 == 0){
				vec[j] = isEvenPosOne;
			}
			else{
				vec[j] = !isEvenPosOne;
			}

		}
	}

}

int * intdup(int const * src, size_t len)
{
	int * p = (int*) malloc(len * sizeof(int));
	memcpy(p, src, len * sizeof(int));
	return p;
}

