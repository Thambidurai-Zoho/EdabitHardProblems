/*
Create a function that finds how many prime numbers there are, up to the given integer.

Examples
primeNumbers(10) ➞ 4
// 2, 3, 5 and 7

primeNumbers(20) ➞ 8
// 2, 3, 5, 7, 11, 13, 17 and 19

primeNumbers(30) ➞ 10
// 2, 3, 5, 7, 11, 13, 17, 19, 23 and 29
Notes
N/A
*/

int primeNumbers(int num) {
	 int primeCount=0;
	  for(int i = 2; i <= num; i++){
			  int flag=1;
			  for(int j=2; j < i;j++){
					 if(i%j==0){//if a number(i) divisble by number(j) its not a prime number we change the flag value into zero.
						  flag=0;
						  break;
					 }
				}
      //if the flag value is one after the all iterations its a prime number. 
			if(flag==1){
				 primeCount++;
			}
		}
	return primeCount;
}
