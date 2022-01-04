/*
Create a function that determines whether elements in an array can be re-arranged to form a consecutive list of numbers where each number appears exactly once.

Examples
cons([5, 1, 4, 3, 2]) ➞ true
// Can be re-arranged to form [1, 2, 3, 4, 5]

cons([5, 1, 4, 3, 2, 8]) ➞ false

cons([5, 6, 7, 8, 9, 9]) ➞ false
// 9 appears twice 
Notes
N/A

*/

bool cons(std::vector<int> arr) {
	   sort(arr.begin(),arr.end());//sort the vector
	   for(int i = 0 ; i < arr.size() - 1 ; i++){
	        if(arr[i] + 1 != arr[i+1]){//check the consecutive numbers using this condition.if this condition fails return false.
		    return false;
		}    
	  }
	  return true;// if vector has a consecutive numbers finally we return true.
}
