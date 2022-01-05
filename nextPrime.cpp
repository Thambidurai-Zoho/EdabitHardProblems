/*
Given an integer, create a function that returns the next prime. If the number is prime, return the number itself.

Examples
nextPrime(12) ➞ 13

nextPrime(24) ➞ 29

nextPrime(11) ➞ 11
// 11 is a prime, so we return the number itself.
Notes
Note: 1 is not a prime.

*/


#include <math.h>

int nextPrime(int num) {
	while(num){
		if(num==1)
			num++;
		
		  int flag=0;
      //find prime or not using below looping 
		  for(int i=2;i<num ;i++){
				 if(num%i==0){
					  flag=1;
				 }
			}
		if(flag==0)
			return num;
		
		num++;//increae the num value for next iteration
	}
}
