#include <stdio.h>
#include <omp.h>

int main()
{	
	#pragma omp parallel num_threads(4)
	{
		int currentThread = omp_get_thread_num();
		if(currentThread == 0)
		{
			printf("Master!\n");
		}
		else
		{
			printf("Slave!\n");
		}
	}
	return 0;
}
