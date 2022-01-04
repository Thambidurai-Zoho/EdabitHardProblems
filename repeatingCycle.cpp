/*
Below is an example of a repeating cycle.

isRepeatingCycle([1, 2, 3, 1, 2], 3) => true
// Since the first two elements of [1, 2, 3] equals [1, 2]
Below is an example of a non-repeating cycle.

isRepeatingCycle([1, 2, 3, 1, 3], 3) => false
// Since [1, 2, 3] != [1, 3]
You are tasked with writing a function that takes in two inputs:

1.An array of integers.
2.The length of each cycle.
Return the boolean value true if the array is a repeating cycle, and false if the array is a non-repeating cycle.

Examples
isRepeatingCycle([1, 2, 3, 1, 2, 3, 1], 3) ➞ true

isRepeatingCycle([1, 2, 3, 4, 2, 3, 1], 4) ➞ false

isRepeatingCycle([1, 2, 1, 2, 2], 2) ➞ false

isRepeatingCycle([1, 1, 1, 1], 3) ➞ true
Notes
All cycles begin with the first element of the array.
Return true if the cycle length is greater than the array length.
*/

bool isRepeatingCycle(std::vector<int> arr, int length) {
	  //Return true if the cycle length is greater than or equal to the array length.
    if(arr.size()  <= length ){
			  return true;
		}
	
	  int index=0;
	  for(int i = length ; i < arr.size(); i++){
			  if(!(arr[i] == arr[index++])){//we check its cyclic or not using this condition.
					 return false;
				}
		}
	
	  return true;//if the vector is cyclic we return true.
}
