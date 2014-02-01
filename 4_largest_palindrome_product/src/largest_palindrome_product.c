#include <stdio.h>

int palindrone(int int_a, int int_b);

int main()
{
	int int_i;
	int int_j;
	int int_n;
	int int_count;
	int int_count2;
	int int_palindrone;

	int_i=999;
	int_j=999;

	/*compare*/
	if(int_palindrone = palindrone(int_i, int_j))
		;

	/*-j compare*/
	if(!int_palindrone){
		int_j--;
		int_palindrone = palindrone(int_i, int_j);
	}

	/*-i compare*/
		if(!int_palindrone){
			int_i--;
			int_palindrone = palindrone(int_i, int_j);
		}

	/*+i-j compare*/

		if(!int_palindrone){
			int_i++;
			int_j--;
			int_palindrone = palindrone(int_i, int_j);
		}

	/*-i compare*/
		if(!int_palindrone){
			int_i--;
			int_palindrone = palindrone(int_i, int_j);
		}

	/*+i-j compare*/
		if(!int_palindrone){
			int_i++;
			int_j--;
			int_palindrone = palindrone(int_i, int_j);
		}

	/*main loop*/
	int_n = 2;
	while(!int_palindrone /*= !palindrone(int_i, int_j)*/){
		for(int_count=0; int_count < 2 && !int_palindrone; int_count++){
			int_j += (int_n -1);
			int_i -= int_n;
			int_palindrone = palindrone(int_i, int_j);
			for(int_count2=0;int_count2 < int_n && !int_palindrone;int_count2++){
				int_i++;
				int_j--;
				int_palindrone = palindrone(int_i, int_j);
			}
		}
		int_n++;
	}

	printf("The Largest palidrome of two three digit numbers is %d\n", int_palindrone);


	return 0;
}

int palindrone(int_a, int_b)
{
	/* Initialize */
	int int_product;
	int int_copy;
	int int_reverse;

	int_product = 0;
	int_copy = 0;
	int_reverse = 0;

	/* Get the product and copy it so that it can be reversed  while preserving the original number */
	int_product = int_a * int_b;
	int_copy = int_product;

	/* Get the reverse of the number */
	while(int_copy){
		int_reverse = int_reverse * 10;
		int_reverse = int_reverse + int_copy % 10;
		int_copy = int_copy / 10;
	}

	/* Test to see if it is a palindrone */
	if(int_reverse == int_product)
		return int_product;
	else if(int_reverse != int_product)
		return 0;

}
