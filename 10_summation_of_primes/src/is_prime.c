#include "is_prime.h"
#include <math.h>

#define SQUARE_ROOT 0.5

int is_prime(unsigned long int int_org){

/*
	Take the number and see if it is divisible by 2
	if it is then return 0
	if it is not add one to the number until it is one less than the num
*/

	unsigned long int int_test = 2;

	for(int_test = 2; int_test <= pow(int_org, SQUARE_ROOT) ; int_test++){
		if(int_org % int_test == 0){
			return 0;
		}
	}

	return 1;	
}
