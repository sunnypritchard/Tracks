#include "../leap.h"
#include <assert.h>


static void test_year_not_divisible_by_4_in_common_year(void)
{
   assert(!leap_year(2015));
   printf("Test passed: 2015 is not a leap year.\n");
   
}

static void test_year_divisible_by_4_but_not_100_in_leap_year(void)
{
	assert(leap_year(2024));
	printf("Test passed: 2024 is a leap year.\n");
}

static void test_year_divisible_by_100_but_not_400_in_common_year(void)
{
	assert(!leap_year(1900));
	printf("Test passed: 1900 is not a leap year.\n");
}

static void test_year_divisible_by_400_in_leap_year(void)
{
	assert(leap_year(2000));
	printf("Test passed: 2000 is a leap year.\n");
}

int main(void)
{
    test_year_not_divisible_by_4_in_common_year();
    test_year_divisible_by_4_but_not_100_in_leap_year();
    test_year_divisible_by_100_but_not_400_in_common_year();
    test_year_divisible_by_400_in_leap_year();
    printf("All tests passed.\n");
    
    return 0;
}