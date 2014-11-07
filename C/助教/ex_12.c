#include <stdio.h>


int main()
{
	#ifdef TED
		printf("hi,ted\n");
	#else
		piintf("hi,anyone\n);
	#endif
	#ifndef RALPH
			printf("RAPLH not defined\n");
	#endif
	return 0;
} 