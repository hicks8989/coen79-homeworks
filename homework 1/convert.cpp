/*
* Name: Eric Hicks
* Email: ehicks2@scu.edu
* Student 1629357
*
* Assignment: Provides a simple library for converting from feet to meters.
* 1 of 3: This is the utility file of the program.
*/

#include "convert.h"

double feet_to_meters(double f)
// Precondition: f is a measurement in feet no less than 0.
// Postcondition: The return value is the measurement in feet converted to 
// meters.
{
    const double MINIMUM_FEET = 0; // Cannot have negative feet.
    assert(f >= MINIMUM_FEET);
    return f / 3.281;  
}

void setup_cout_fractions(int fraction_digits)
// Precondition: fraction_digits is not negative.
// Postcondition: All double or float numbers printed to cout will now be
// rounded to the specified digits on the right of the decimal.
{
    assert(fraction_digits > 0);
    cout.precision(fraction_digits);
    cout.setf(ios::fixed, ios::floatfield);
    if (fraction_digits == 0)
        cout.unsetf(ios::showpoint);
    else
        cout.setf(ios::showpoint); 
}
