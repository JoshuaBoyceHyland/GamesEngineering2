//
// Created by gameuser on 13/09/2024.
//

#include "RomanNumeralConverter.h"

#include <iostream>
#include <ostream>

bool RomanNumeralConverter::inputIsValid( std::string input )
{
    bool inputInsideLengthBoundary = input.length() < 15;
    bool yearToBig = convertRomanNumeralToNumeral(input) < 4000;

    int numOfRomanNumerals = 0;

    for( int i = 0; i < input.length(); i++ )
    {
        for( int j = 0; j < MAX_ROMAN_NUMERALS; j++ )
        {
            if( input[i] == romanNumeralStr[j] )
            {
                numOfRomanNumerals++;
                break;
            }
        }
    }

    bool isRomanNumeral = numOfRomanNumerals == input.length();

    return yearToBig && inputInsideLengthBoundary && isRomanNumeral;
}

int RomanNumeralConverter::convertRomanNumeralToNumeral( std::string input )
{
    int year = 0;
    char previousRomanNumeral; // used t

    for( int  i = input.length() - 1; i >= 0; i-- )
    {
        for(  int j = 0; j < MAX_ROMAN_NUMERALS;j++  )
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

