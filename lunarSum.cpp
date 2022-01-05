/*
When two numbers are added together, the strange Lunar arithmetic is used on the Moon. The Lunar sum of two numbers is not determined by the sum of their individual digits, but by the highest digit of the two taken into account at each step, in columnar form.

2  4  6  +
3  1  7  =
--------
3  4  7

// 3 > 2 | 4 > 1 | 7 > 6

1  3  4  +
   5  4  =
--------
1  5  4

//  1 > 0 | 5 > 3 | 4 == 4
// Blank spots in the columnar form are equals to 0

   2  0  +
1  4  0  =
-------
1  4  0

// 1 > 0 | 4 > 2 | 0 == 0
Given two positive integers number1 and number2, implement a function that returns their sum as a new integer.

Examples
lunarSum(246, 317) ➞ 347

lunarSum(134, 54) ➞ 154

lunarSum(20, 140) ➞ 140
Notes
The given numbers will be always positive integers: no exceptions to handle.

*/

int lunarSum(int number1, int number2) {
	  int sum=0,i=1; 
	  while(number1 > 0 || number2 > 0){
			 int rem1 = number1 % 10;//get the reminder of number1
			 int rem2 = number2 % 10;//get the reminder of number2
			  if(rem1 < rem2){
					  sum = sum + (rem2*i);//if rem2 is big we add the reminder2 into the sum
					  i*=10;
				}else{
					sum = sum + (rem1*i);//if rem1 is big we add the reminder1 into the sum
					i*=10;
				}
			
			 number1/=10;
			 number2/=10;
		}
	return sum;//finally we return the sum
}
