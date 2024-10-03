#include <iostream>


#include "RomanNumeralConverter.h"

int main()
{
    std::string input;
    bool keepTranslating = true;
    RomanNumeralConverter converter;
    // while user still wants to translate roman numerals
    while( keepTranslating )
    {
        std::cout << "Please enter a Roman numeral to be translated under 15 characters and less than 4000: ";
        std::cin >> input;
        // if input is actually a roman numeral
        if( converter.inputIsValid( input ) )
        {
            std::cout<< converter.convertRomanNumeralToNumeral( input ) << std::endl;
            std::cout<< "Would you like to convert another Roman Numeral (Y/N) ?"<<std::endl;
            std::cin>> input;
            bool validResponse = false;
            while( !validResponse )
            {
                if( input == "Y" || input == "y" )
                {
                    validResponse = true;
                    keepTranslating = true;
                }
                else if( input == "N" || input == "n" )
                {
                    validResponse = true;
                    keepTranslating = false;
                }
                else
                {
                    std::cout<< "Please select Y or N: "<<std::endl;
                    std::cin >> input;
                    validResponse = false;

                }
            }

        }
        else
        {
            std::cout<< "Invalid Input!" << std::endl;
            keepTranslating = true;
        }
    }
    return 0;
}
