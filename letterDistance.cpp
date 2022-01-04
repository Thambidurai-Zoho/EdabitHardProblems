/*
Given two words, the letter distance is calculated by taking the absolute value of the difference in character codes and summing up the difference.

If one word is longer than another, add the difference in lengths towards the score.

To illustrate:

letterDistance("house", "fly") = dist("h", "f") + dist("o", "l") + dist("u", "y") + dist(house.length, fly.length)

= |104 - 102| + |111 - 108| + |117 - 121| + |5 - 3|
= 2 + 3 + 4 + 2
= 11
Examples
letterDistance("sharp", "sharq") ➞ 1

letterDistance("abcde", "Abcde") ➞ 32

letterDistance("abcde", "bcdef") ➞ 5
Notes
Always start comparing the two strings from their first letter.
Excess letters are not counted towards distance.
Capital letters are included.

*/





int letterDistance(std::string str1, std::string str2) {
	int len;  
  
  //find the minimum length string and store it into the len variable.
	if(str1.length()<str2.length()){
		 len = str1.length();
	}
	else len = str2.length();
	
	int sum=0;
	for(int i = 0 ; i < len ; i++){//this for loop used to find the difference of the two strings letters upto minimum length.
		   sum+= abs(str1[i]-str2[i]);//abs function used to convert the negative number to positive number. 
	}
	sum+= abs(str1.length()-str2.length());//finally we add difference of the two strings length
	return sum;//return the sum
}
