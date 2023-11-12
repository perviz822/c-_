using System;

class Program
{
    static void Main()
    {
        string name = "John";
        int age = 25;
        double salary = 50000.75;

        // Using placeholders with various options
        string formattedString = string.Format("Name: {0,-10}, Age: {1:D3}, Salary: {2:C2}", name, age, salary);
        
        Console.WriteLine(formattedString);
    }
}


/*
In this example:

{0,-10}: The first placeholder ({0}) represents the variable name. -10 specifies a minimum width of 10 characters, and the name will be left-aligned within that space.

{1:D3}: The second placeholder ({1}) represents the variable age. D3 specifies that it should be formatted as a decimal with at least 3 digits.

{2:C2}: The third placeholder ({2}) represents the variable salary. C2 specifies a currency format with 2 digits after the decimal point.

Placeholder syntax
	"{" n ["," width] [":" format [precision]] "}"

	   n	argument number (starting at 0)
  	width	field width (exceeded if too small)
		positive = right-aligned, negative = left-aligned
	  format	formatting code (e.g. d, f, e, x, ...)
	  precision	number of fractional digits (sometimes number of digits)

	Example:	{0,10:f2}

*/
