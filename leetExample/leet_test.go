package main //same package name as code we are testing

import (
    "testing"

)

// Test case for each example in specification
// I need to add tests for the constraints in the spec
func TestExampleOne(t *testing.T) {
	nums := []int{2,7,11,15}
	target:=9
	answer:=twoSum(nums,target)
    if answer[0]!=0 || answer[1]!=1 {
	    t.Fatalf(`Example 1 nums=%v and target=%v got %v instead of 0,1`, nums, target,answer)
    }//if test fails
}

func TestExampleTwo(t *testing.T) {
	nums := []int{3,2,4}
	target:=6
	answer:=twoSum(nums,target)
    if answer[0]!=1 || answer[1]!=2 {
	    t.Fatalf(`Example 1 nums=%v and target=%v got %v instead of 0,1`, nums, target,answer)
    }//if test fails
}

func TestExampleThree(t *testing.T) {
	nums := []int{3,3}
	target:=6
	answer:=twoSum(nums,target)
    if answer[0]!=0 || answer[1]!=1 {
	    t.Fatalf(`Example 1 nums=%v and target=%v got %v instead of 0,1`, nums, target,answer)
    }//if test fails
}
