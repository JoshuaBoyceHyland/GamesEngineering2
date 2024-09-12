#include <iostream>
#include <string>

class RomanNumeralConverter {

    private:
    char romanNumeralStr[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int romanNumeralValues[7] = { 1, 5, 10, 50, 100, 500, 1000 };

    public:
    bool inputIsValid( std::string input )
    {
        bool inputTooLong = input.length() < 15;
        bool yearToBig = convertRomanNumeralTNumeral(input) < 4000;

        return yearToBig || inputTooLong;

    }
    int convertRomanNumeralTNumeral( std::string input )
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


};


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
