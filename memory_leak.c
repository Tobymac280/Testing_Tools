/**
 * Author: Nik
 * Created: 18/12/2020 (dd/mm/yyyy)
 **/

#include "stdio.h"
#include "stdlib.h"

int main()
{
	// generates an infinite loop for our indeterminant memory allocation
	while(1)
	{
		// This will multiply 100 to our sizeof(int) call
		// NOTE: Make this value large if you want to crash the system -
		// quicker
		const int COEFFICIENT = 10000000;
		// allocate space of 20 bytes
		int* ptr = (int*)malloc(COEFFICIENT*sizeof(int));
	}

	return 0;
}
