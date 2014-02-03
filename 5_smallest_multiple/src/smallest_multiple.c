#include <stdio.h>

int main()
{
	int int_copy = 0;
	int int_x = 0;
	int int_i = 2;
	int int_n = 2;

	/* find the smallest multiple */
	while(int_n <= 20){
		for( ; int_i % int_n == 0 && int_n <= 20; int_n++){
			;
		}
		for( int_x = 2, int_copy = int_i; int_n <= 20 && (int_copy = int_x * int_copy) % int_n != 0; int_x++, int_copy = int_i){
			;
		}
		int_i = int_copy;
	}

	/* print the number */
	printf("The smallest multiple of the numbers from 1 to 20 is %d\n", int_i);

	return 0;
}
