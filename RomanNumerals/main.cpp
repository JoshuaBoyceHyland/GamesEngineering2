#include <iostream>
#include <string>


int main()
{
    std::string input;
    char RomanNumeralStr[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int romanNumeralValues[7] = { 1, 5, 10, 50, 100, 500, 1000 };

    std::cout << "Please enter a Roman numeral under 15 characters: ";
    std::cin>> input;

    int final = 0;

    for( char individualInput : input )
    {
        for(  int i = 0; i < 7; i++  )
        {
            if( RomanNumeralStr[i] == individualInput )
            {
                final += romanNumeralValues[i];
            }
        }
    }

    return 0;
}
