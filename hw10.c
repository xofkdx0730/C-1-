#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct city
{
	char name[50];
	char country[50];
	int popu;
} City;

int main(void)
{
	City cities[3];
	int i;

	printf("Input three cities: \n");
	for (i = 0; i < 3; i++) {
		printf("Name> ");
		fgets(cities[i].name, sizeof(cities[i].name), stdin);
		cities[i].name[strcspn(cities[i].name, "\n")] = '\0';

		printf("Country> ");
		fgets(cities[i].country, sizeof(cities[i].country), stdin);
		cities[i].country[strcspn(cities[i].country, "\n")] = '\0';

		printf("Population> ");
		scanf("%d", &cities[i].popu);
		getchar();
	}
	printf("\n");
	printf("Printing the three cities: \n");
	for (i = 0; i < 3; i++) {
		printf("%d. %s in %s with a population of %d people \n", i+1, cities[i].name, cities[i].country, cities[i].popu);
	}
	return 0;
}
