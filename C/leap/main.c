#include "leap.h"

int main(void)
{
	int year;
	printf("Enter a year: ");
	scanf("%d", &year);

	printf("%d is %s a leap year.\n", year, leap_year(year) ? "" : "not");

	return 0;
}