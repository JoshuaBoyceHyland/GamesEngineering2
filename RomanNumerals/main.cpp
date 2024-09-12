#include <iostream>
#include <string>


int main()
{
    std::string input;
    bool keepTranslating = true;

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

    int year = 0;

    char previousRomanNumeral;

    for( int  i = input.length() - 1; i >= 0; i-- )
    {
        for(  int j = 0; j < 7;j++  )
        {
            // compares against our roman numerals and adds corresponding value to total
            if( romanNumeralStr[j] == input[i] ) {

                // decides whether we must minus the next number or add it to the year
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
    //MMif( year < 4000 ) {
        std::cout<< " year: " << year;
    // }
    // else {
    //     std::cout <<"Year is outside of range: 1 - 3999"<<std::endl;
    // }



    return 0;
}
