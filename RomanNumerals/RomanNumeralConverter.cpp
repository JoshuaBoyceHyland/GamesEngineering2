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
    // making sure each character is roman numeral
    // still means though that invalid roman numerals can slip the cracks for the moment
    int numOfRomanNumerals = 0;
    for( int i = 0; i < input.length(); i++ )
    {
        for( int k = 0; k < MAX_ROMAN_NUMERALS; k++ )
        {
            if( input[i] == romanNumeralStr[k] )
            {
                numOfRomanNumerals++;
                break;
            }
        }
    }
    bool isRomanNumeral = (numOfRomanNumerals == input.length());
    return yearToBig && inputInsideLengthBoundary && isRomanNumeral;
}//inputIsValid

int RomanNumeralConverter::convertRomanNumeralToNumeral( std::string input )
{
    int total = 0;
    char previousRomanNumeral; // used t
    //traverse string right to left
    for( int  i = input.length() - 1; i >= 0; i-- )
    {
        for(  int j = 0; j < MAX_ROMAN_NUMERALS;j++  )
        {
            // compares against our roman numerals and adds corresponding value to total
            if( romanNumeralStr[j] == input[i] )
            {
                // checking whether the next value should be minused or added to create correct year
                // also checking that it is not the sma
                if( romanNumeralValues[j] < total && romanNumeralStr[j] != previousRomanNumeral ) {
                    total -= romanNumeralValues[j];
                }
                else
                {
                    total += romanNumeralValues[j];
                }
                previousRomanNumeral = romanNumeralStr[j];
            }
        }//for
    }
    return total;
}//convertRomanNumeralToNumeral

