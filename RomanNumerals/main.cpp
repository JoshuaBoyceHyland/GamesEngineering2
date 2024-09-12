#include <iostream>
#include <string>


int main()
{
    std::string input;

    // Roman numerals and their corresponding values
    char romanNumeralStr[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int romanNumeralValues[7] = { 1, 5, 10, 50, 100, 500, 1000 };

    std::cout << "Please enter a Roman numeral to be translated: ";
    std::cin>> input;

    while( input.length() > 15 )
    {
        std::cout << "Please enter a Roman numeral under 15 characters: ";
        std::cin>> input;

    }

    int translatedRomanNumeral = 0;

    for( char individualInput : input )
    {
        for(  int i = 0; i < 7; i++  )
        {
            // compares against our roman numerals and adds corresponding value to total
            if( romanNumeralStr[i] == individualInput )
            {
                translatedRomanNumeral += romanNumeralValues[i];
            }
        }
    }

    std::cout<<"Your translated Roman Numeral is: " <<translatedRomanNumeral;

    return 0;
}
