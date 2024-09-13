//
// Created by gameuser on 13/09/2024.
//

#ifndef ROMANNUMERALCONVERTER_H
#define ROMANNUMERALCONVERTER_H

#include <string>


class RomanNumeralConverter
{
    private:
        char romanNumeralStr[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
        int romanNumeralValues[7] = { 1, 5, 10, 50, 100, 500, 1000 };

    public:
        bool inputIsValid( std::string input );
        int convertRomanNumeralTNumeral( std::string input );

};



#endif //ROMANNUMERALCONVERTER_H
