1.1
- include the standard library (#include stdio.h)
- to compile: `cc FILENAME.c`
- it comes out as `a.out`
- to run: `a.out`
- functions:
	function_name ()
	{
		do_stuff();
	}
- don't forget the semi-colons
	
1.2
- variables are declared like so: `int VARNAME`
- `int` being 'integer'
- other data types: `char`, `float`, `short` (short integer), `long`, `double` (double-precision floating point
- comments: `/* blahblah */

1.3
- don't forget the parenthesis in if-for-while statements (i.e. `while (x < 3)`)

1.4
- magic numbers are bad, obviously. 
- to add constants ('symbolic constant' or 'symbolic name' in the lingo):
	`#define CONSTANT magic_number`
	i.e.
	
#include <stdio.h>

#define   LOWER  0       /* lower limit of table */
#define   UPPER  300	   /* upper limit */
#define   STEP   20    	   /* step size */

/* print Fahrenheit-Celsius table */
main()
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}	


	