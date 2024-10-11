//----------------------------------------------
// Author: Joseph Kehoe
// Created: 7/10/2024
// Licence: GPL
//This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or (at
// your option) any later version.
// 
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with GNU Emacs.  If not, see <http://www.gnu.org/licenses/>.
//

//----------------------------------------------
// Description:
// Given an array of integers nums and an integer target,
// return indices of the two numbers such that they add up to target.
//
// You may assume that each input would have exactly one solution,
// and you may not use the same element twice.
// You can return the answer in any order.
//
// Example 1:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:
// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:
// Input: nums = [3,3], target = 6
// Output: [0,1]
// Constraints:
// 2 <= nums.length <= 104
// -109 <= nums[i] <= 109
// -109 <= target <= 109
// Only one valid answer exists.
// Follow-up: Can you come up with an algorithm that is less
// than O(n2) time complexity?
//----------------------------------------------
package main

import (
	"fmt"
)


func twoSum(nums []int, target int) []int {
	// using for loop 
        for first, element := range nums {
		for second:=first+1; second< len(nums); second++ {
			if element+nums[second]==target {
				return []int{first,second}
			}
		}
	} 
	return []int {-1,-1}
}

func main() {
	answer:=twoSum([]int{1,2,3,5,7,3},7)
	fmt.Println(answer[0]," and ", answer[1])

}
