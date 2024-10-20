# Documentation
* **Author:** Joshua Boyce Hyland and Ruslan Gavrilov
* **Created:** 17/10/2024


### Licence Details
This program is free software: you can redistribute it and/or modify  
it under the terms of the GNU General Public License as published by  
the Free Software Foundation, either version 3 of the License, or (at  
your option) any later version.
 
This program is distributed in the hope that it will be useful, but  
WITHOUT ANY WARRANTY; without even the implied warranty of  
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU  
General Public License for more details.  
You should have received a copy of the GNU General Public License  
along with GNU Emacs.  If not, see the [GNU licence web page](http://www.gnu.org/licenses/).  

##  Roman Numeral Conversion

### Description:
Given a string, the program will convert the string to a decimal number. This is under the cicrumstance  a valid roman numeral.
If a Roman numeral that is 15 characters long or over 3999 will return a 0

### Example 1:
 **Input:** romanNumeral = "MMCCCXXXIII" 
 **Output:** 2333 
 
###  Example 2:
 **Input:** romanNumeral = "MCMXCIX" 
 **Output:** 1999
 
### Example 3:
 **Input:** romanNumeral = "MMMCDXLIV" 
 **Output:** 3444

 ### Example 3:
 **Input:** romanNumeral = "MMMMM" 
 **Output:** 0 (Invalid)

## Remove Duplicates in Array

### Description:
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

# Example:



## Project Files
1. **samples.go** source code for solution
2. **Readme.md** this Readme file
3. **removeDupes_test.go** code containing Unit Tests for remove duplicates code
4. **romanNumerals_tests** code containing Unit Tests for roman numerals code

## Running and Installation Code
To run the code do:
> go run samples.go

To run the tests do:
> go test 

To install first create an executable with:
> go build samples.go