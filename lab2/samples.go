package main

import (
	"fmt"
)



func romanNumeral( input string )( int ){

	MAX_ROMAN_NUMERALS := int(7)
	romanNumeralStr:= [7]rune{'I', 'V', 'X', 'L', 'C', 'D', 'M'}
	romanNumeralValues:=[7]int{ 1, 5, 10, 50, 100, 500, 1000 }
	
	var previousRomanNumeral rune

	year :=int(0)

	for i := len(input) -1; i >=0 ; i--{

		for j := int(0); j < MAX_ROMAN_NUMERALS; j++{
			
			if romanNumeralStr[j] == rune(input[i]){

				if romanNumeralValues[j] < year && romanNumeralStr[j] != previousRomanNumeral{
					year-=romanNumeralValues[j] // 
				}else{
					year+=romanNumeralValues[j]
				}
				previousRomanNumeral = romanNumeralStr[j]
				
			}
		}

	}

	
	return year
}

func main() {

	temp:=int(romanNumeral("MCMXCIV"))
	fmt.Println(temp)

}
