/*
In each input array, every number repeats at least once, except for two. Write a function that returns the two unique numbers.

Examples
returnUnique([1, 9, 8, 8, 7, 6, 1, 6]) ➞ [9, 7]

returnUnique([5, 5, 2, 4, 4, 4, 9, 9, 9, 1]) ➞ [2, 1]

returnUnique([9, 5, 6, 8, 7, 7, 1, 1, 1, 1, 1, 9, 8]) ➞ [5, 6]
Notes
Keep the same ordering in the output.
*/


std::vector<int> returnUnique(std::vector<int> arr) {
	  int count[10]={0};
	  std::vector<int> uniqueNums;
  
    //this for loop used to find the count of the every variable.
	  for(int i = 0; i < arr.size() ;i++){
			  count[arr[i]]++;
		}
  
    //if variable count is 1 we push into the vector.
	  for(int i=0;i< arr.size();i++){
			  if(count[arr[i]]==1){
					 uniqueNums.push_back(arr[i]);
				}
		}
	return uniqueNums;
}
