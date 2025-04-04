### A Brief Explanation of the Approach

The program determines whether a given year is a leap year based on the following rules:

1. A year is a leap year if:
   - It is divisible by 400, **or**
   - It is divisible by 4 but **not** divisible by 100.

### Approach:

1. The function `leap_year` takes an integer `year` as input.
2. It calculates three boolean values:
   - `divisible_by_4`: Checks if the year is divisible by 4.
   - `divisible_by_100`: Checks if the year is divisible by 100.
   - `divisible_by_400`: Checks if the year is divisible by 400.
3. The function evaluates the leap year condition:
   - A year is a leap year if it satisfies `divisible_by_400` **or** (`divisible_by_4` **and not** `divisible_by_100`).
4. The result of this condition is returned as a boolean (`true` for leap year, `false` otherwise).


### Pseudo Code:

```ps
FUNCTION leap_year(year):
	SET divisible_by_4 TO (year MOD 4 == 0)
	SET divisible_by_100 TO (year MOD 100 == 0)
	SET divisible_by_400 TO (year MOD 400 == 0)

	IF divisible_by_400 OR (divisible_by_4 AND NOT divisible_by_100):
		RETURN TRUE
	ELSE
		RETURN FALSE
FUNCTION END
```