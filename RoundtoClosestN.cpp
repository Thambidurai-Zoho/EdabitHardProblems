/*
Create a function that takes two integers, num and n, and returns an integer which is divisible by n and is the closest to num. If there are two numbers equidistant from num and divisible by n, select the larger one.

Examples
roundNumber(33, 25) ➞ 25

roundNumber(46, 7) ➞ 49

roundNumber(133, 14) ➞ 140

*/
unsigned int roundNumber(unsigned int num, unsigned int n) {
	unsigned int n1=num;
  
	if(num%n==0)
		return num;
  
	while(1){
		 n1++;//increment the num from the given num value
		 num--;//decrement the value from the given num value
		if(n1%n==0){
			return n1;//return the closest number
		}
    
		if(num%n==0){
			return num;//return the closest number
		}
    
	}
  
}
