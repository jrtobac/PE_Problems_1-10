#include "is_prime.h"

int is_prime(int int_org){

/*
	Take the number and see if it is divisible by 2
	if it is then return 0
	if it is not add one to the number until it is one less than the num
*/

	int int_test = 2;

	for(int_test = 2; int_test < int_org ; int_test++){
		if(int_org % int_test == 0){
			return 0;
		}
	}

	return 1;	
}
