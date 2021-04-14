#include <stdio.h>

typedef struct part{
	int code;
	int count;
	float cost;
}Part;

int main()
{
	Part part[2];
	
	scanf("%i %i %f", &part[0].code, &part[0].count, &part[0].cost);
	scanf("%i %i %f", &part[1].code, &part[1].count, &part[1].cost);
	
	printf("VALOR A PAGAR: R$ %.2f\n", (part[0].count * part[0].cost) + (part[1].count * part[1].cost));
	
	return 0;
}
