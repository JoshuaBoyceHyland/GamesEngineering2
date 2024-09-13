//
// Created by gameuser on 13/09/2024.
//

#ifndef ROMANNUMERALCONVERTER_H
#define ROMANNUMERALCONVERTER_H

#include <string>


class RomanNumeralConverter
{
    private:
        const int MAX_ROMAN_NUMERALS = 7;
        const char romanNumeralStr[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
        const int romanNumeralValues[7] = { 1, 5, 10, 50, 100, 500, 1000 };

    public:

        // checks if input is valid
        // input is not too long
        // input amounts to less than 4000
        // input is actually a roman numeral
        bool inputIsValid( std::string input );

        // converts roman numeral to numeral year
        int convertRomanNumeralToNumeral( std::string input );

};



#endif //ROMANNUMERALCONVERTER_H
