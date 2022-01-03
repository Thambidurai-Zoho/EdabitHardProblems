/*

Create a function that takes an array and finds the integer which appears an odd number of times.

Examples
findOdd([1, 1, 2, -2, 5, 2, 4, 4, -1, -2, 5]) ➞ -1

findOdd([20, 1, 1, 2, 2, 3, 3, 5, 5, 4, 20, 4, 5]) ➞ 5

findOdd([10]) ➞ 10
Notes
There will always only be one integer that appears an odd number of times.

*/


using namespace std;

int findOdd(vector<int> arr) {
	  for(int i=0;i<arr.size();i++){
			 int count=1;
			 for(int j=0;j<arr.size();j++){
				   if(i!=j){// same index  does not alloowed.
						  if(arr[i]==arr[j]){//if the array has same integers we increase the count of the variable 
								count++;
							}
					 }
			 }
			if(count%2!=0){//if arr[i] has odd count we return the arr[i].
				 return arr[i];
			}
		}
}
