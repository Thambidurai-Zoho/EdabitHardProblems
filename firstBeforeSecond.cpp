/*
You are given three inputs: a string, one letter, and a second letter.

Write a function that returns true if every instance of the first letter occurs before every instance of the second letter.

Examples
firstBeforeSecond("a rabbit jumps joyfully", 'a', 'j') ➞ true
// every instance of "a" occurs before every instance of "j"

firstBeforeSecond("knaves knew about waterfalls", 'k', 'w') ➞  true

firstBeforeSecond("happy birthday", 'a', 'y') ➞ false
// the "a" in "birthday" occurs after the "y" in "happy"

firstBeforeSecond("precarious kangaroos", 'k', 'a') ➞ false
Notes
All strings will be in lower case.
All strings will contain the first and second letters at least once.

*/

bool firstBeforeSecond(std::string str, char first, char second) {
	int temp=0;     
	for(int i=0 ;i < str.length();i++){
				  if(str[i]==first){
						if(temp==1){
							return false;//after the second character is detected if first character is detected we return false 
						}
					}
				  if(str[i]==second){
						 temp=1;//second character detected after we change the temp value is equal to 1.
					}
			 }
	return true;
}
