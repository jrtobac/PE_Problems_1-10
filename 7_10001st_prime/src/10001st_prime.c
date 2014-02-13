#include <stdio.h>
#include "is_prime.h"

int main()
{

	/*start at 2
	check if its prime
	if it is prime, add one to the count of primes
	if its not prime dont add one to the count 
	add 1 to the number you started with
	go back to checking if it is prime*/

	int int_num;
	int int_count;
	
	int_num = 0;
	int_count = 1;

	for(int_num = 3; int_count < 10001; int_num++){
		if(is_prime(int_num)){
			int_count++;
		}
	}
	int_num--;	

	printf("The 10001st prime number is: %d\n", int_num);

	return 0;
}
