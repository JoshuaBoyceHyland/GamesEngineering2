# Sample Code with Documentation
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

##  Description:


### Example 1:
 **Input:** nums = [2,7,11,15], target = 9  
 **Output:** [0,1]  
 **Explanation:** Because nums[0] + nums[1] == 9, we return [0, 1].  
 
###  Example 2:
 **Input:** nums = [3,2,4], target = 6  
 **Output:** [1,2]  
 
### Example 3:
 **Input:** nums = [3,3], target = 6  
 **Output:** [0,1]  
 **Constraints:**  
1. 2 <= nums.length <= 104
2. -109 <= nums[i] <= 109
3. -109 <= target <= 109
4. Only one valid answer exists.
5. Follow-up: Can you come up with an algorithm that is less
 than Big-O n squared time complexity?

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