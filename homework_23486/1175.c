#include <stdio.h>

int main()
{
	int N[20];
	
	for(int i = 19; i >= 0; i--) { scanf("%i", &N[i]); }
	
	for(int i = 0; i < 20; i++) { printf("N[%i] = %i\n", i, N[i]); }

	return 0;
}
