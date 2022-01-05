/*
Your function will get an array with a number sequence. However, one item will be missing. It's your job to find out which one is not in the array.

To illustrate, given the array [1, 3, 4, 5], 2 is missing so the output must be 2.

Examples
missing([1, 3, 4, 5]) ➞ 2

missing([2, 4, 6, 8, 10, 14, 16]) ➞ 12

missing([1.5, 2, 3]) ➞ 2.5
Notes
The missing item will never be the smallest or largest number in the array.
In every array, exactly one item is missing.
*/



float missing(std::vector<float> arr) {
	float dis1 = arr[1] - arr[0];// find the difference for arr[1] and arr[0]
	float dis2 = arr[2] - arr[1];//find the difference for arr[2] and arr[1]
	
  //find the minimum distance and store it into the dis1 variable
	if(dis1 > dis2){
		 dis1 = dis2;
	}
	
	for(int i = 0;i < arr.size()-1 ;i++){
       // find the missing number using below condition
		   if(arr[i+1] != arr[i] + dis1)
				 return arr[i] + dis1;
	}
}
