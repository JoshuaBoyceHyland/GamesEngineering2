#include <iostream>


#include "RomanNumeralConverter.h"

int main()
{

    std::string input;

    bool keepTranslating = true;
    RomanNumeralConverter converter;

    while( keepTranslating )
    {
        std::cout << "Please enter a Roman numeral to be translated under 15 characters and less than 4000: ";
        std::cin>> input;

        if( converter.inputIsValid( input ) )
        {
            std::cout<< converter.convertRomanNumeralTNumeral( input ) << std::endl;
            std::cout<< "Would you like to convert another Roman Numeral (Y/N) ?"<<std::endl;
            std::cin>> input;

            if( input == "Y" || input == "y" )
            {
                keepTranslating = true;

            }
            else
            {
                keepTranslating = false;
            }
        }
        else {
            std::cout<< "Invalid Input!" << std::endl;
            keepTranslating = true;

        }
    }



    return 0;
}
