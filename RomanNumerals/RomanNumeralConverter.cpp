//
// Created by gameuser on 13/09/2024.
//

#include "RomanNumeralConverter.h"

bool RomanNumeralConverter::inputIsValid( std::string input )
{
    bool inputTooLong = input.length() < 15;
    bool yearToBig = convertRomanNumeralTNumeral(input) < 4000;

    return yearToBig || inputTooLong;
}

int RomanNumeralConverter::convertRomanNumeralTNumeral( std::string input )
{
    int year = 0;
    char previousRomanNumeral;

    for( int  i = input.length() - 1; i >= 0; i-- )
    {
        for(  int j = 0; j < 7;j++  )
        {
            // compares against our roman numerals and adds corresponding value to total
            if( romanNumeralStr[j] == input[i] ) {

                // checking whether the next value should be minused or added to create correct year
                if( romanNumeralValues[j] < year && romanNumeralStr[j] != previousRomanNumeral ) {
                    year -= romanNumeralValues[j];
                }
                else {
                    year += romanNumeralValues[j];
                }
                previousRomanNumeral = romanNumeralStr[j];

            }
        }
    }
    return year;
}

