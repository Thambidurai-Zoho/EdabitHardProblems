/*
Create a function that counts the number of blocks of two or more adjacent 1s in an array.

Examples
countOnes([1, 0, 0, 1, 1, 0, 1, 1, 1]) ➞ 2
// Two instances: [1, 1] (middle) and [1, 1, 1] (end)

countOnes([1, 0, 1, 0, 1, 0, 1, 0]) ➞ 0

countOnes([1, 1, 1, 1, 0, 0, 0, 0]) ➞ 1

countOnes([0, 0, 0]) ➞ 0
Notes
A single 1 by itself (surrounded by a zero on its left and right), does not count towards the total (see first example).
Each input will contain only zeroes and ones.
*/


int countOnes(std::vector<int> arr) {
	   int countOnes=0,flag=1; 
	   for(int i = 0; i < arr.size(); i++){
	        if(arr[i]==1 && arr[i+1]==1){//if continuously two 1s is coming we increase the countOnes count. 
		   if(flag == 1){
			 countOnes++;
		   }
		   flag=0;//we change the flag value equal to zero. beacause , sometimes ones contionuously occured so that time we dont increase the countOnes count.
		}
        	else flag=1;
		 }
	return countOnes;// return the ones count.
}
