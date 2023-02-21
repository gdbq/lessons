//https://github.com/gdbq/lessons/tree/main/pr4
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int day;

	printf("Day? ");
	(void)scanf("%i", &day);

	switch (day)
	{
		case 1: 
			{
				printf("Mon");
			}
			break;
		case 2: 
			{
				printf("Tue");
			}
			break;
		case 3: 
			{
				printf("Wed");
			}
			break;
		case 4: 
			{
				printf("Thu");
			}
			break;
		case 5: 
			{
				printf("Fri");
			}
			break;
		case 6: 
			{
				printf("Sat");
			}
			break;
		case 7: 
			{
				printf("Sun");
			}
			break;
		default:
			{
				printf("Error");
			}
	}

}