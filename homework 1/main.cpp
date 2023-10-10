/*
* Name: Eric Hicks
* Email: ehicks2@scu.edu
* Student 1629357
*
* Assignment: Prints a conversion table from feet to meters.
* 3 of 3: This is the main file of the program.
*/

#include "convert.h"

int main( )
{
    const char   HEADING1[]  = "  Feet"; // Heading for table's 1st column
    const char   HEADING2[]  = "Meters"; // Heading for table's 2nd column
    const char   LABEL1[]    =     "ft"; // Label for numbers in 1st column
    const char   LABEL2      =      'm'; // Label for numbers in 2nd column
    const double TABLE_BEGIN =      0.0; // The table's first feet measurement
    const double TABLE_END   =    100.0; // The table's final feet measurement
    const double TABLE_STEP  =     10.0; // Increment between feet measurements
    const int    WIDTH       =        5; // Number chars in output numbers
    const int    DIGITS      =        1; // Number digits right of decimal pt

    double value1;  // A value from the table's first column
    double value2;  // A value from the table's second column
    
    // Set up the output for fractions and print the table headings.
    setup_cout_fractions(DIGITS);
    cout << "CONVERSIONS from " << TABLE_BEGIN << " to " << TABLE_END << endl;
    cout << HEADING1 << "  " << HEADING2 << endl;
    
    // Each iteration of the loop prints one line of the table.
    for (value1 = TABLE_BEGIN; value1 <= TABLE_END; value1 += TABLE_STEP) 
    {   
        value2 = feet_to_meters(value1);
        cout << setw(WIDTH) << value1 << LABEL1 << "  "; 
        cout << setw(WIDTH) << value2 << LABEL2 << endl; 
    }

    return EXIT_SUCCESS;
}
