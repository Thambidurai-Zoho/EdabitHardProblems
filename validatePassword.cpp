/*
Create a function that validates a password to conform to the following rules:

Length between 6 and 24 characters.
At least one uppercase letter (A-Z).
At least one lowercase letter (a-z).
At least one digit (0-9).
Maximum of 2 repeated characters.
"aa" is OK 👍
"aaa" is NOT OK 👎
Supported special characters:
! @ # $ % ^ & * ( ) + = _ - { } [ ] : ; " ' ? < > , .
Examples
validatePassword("P1zz@") ➞ false
// Too short.

validatePassword("iLoveYou") ➞ false
// Missing a number.

validatePassword("Fhg93@") ➞ true
// OK!
Notes
N/A

*/


bool validatePassword(std::string password) {
//Length between 6 and 24 characters.
	  if(!(password.length() >=6 && password.length() <=24)){
			  return false;
		}
	
	  int lowerCaseCount=0,upperCaseCount=0,numberCount=0,count[257]={0};
    // this for loop used to find the upper and lower case and numbers count and also how many times the characters are repeated .
	  for(int i=0; i < password.length();i++){
			if(password[i] >= 'a' && password[i] <= 'z'){
				 lowerCaseCount++;
			}
			else if(password[i] >= 'A' && password[i] <= 'Z'){
				 upperCaseCount++;
			}
			else if(password[i] >= '0' && password[i] <= '9'){
				 numberCount++;
			}
			else{}
			count[password[i]]++;
			if(count[password[i]]>2){
				 return false;
			}
		}
    //if upper and lower and number present in the string we return true.
	if(numberCount > 0 && upperCaseCount > 0 && lowerCaseCount > 0){
		   return true;
	}
	else return false;
}
