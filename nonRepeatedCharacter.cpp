/*
Create a function that accepts a string as an argument and returns the first non-repeated character.

Examples
firstNonRepeatedCharacter("g") ➞ "g"

firstNonRepeatedCharacter("it was then the frothy word met the round night") ➞ "a"

firstNonRepeatedCharacter("the quick brown fox jumps then quickly blows air") ➞ "f"

firstNonRepeatedCharacter("hheelloo") ➞ "Invalid"

firstNonRepeatedCharacter("") ➞ "Invalid"
Notes
An empty string should return "Invalid".
If every character repeats, return "Invalid".
Don't worry about case sensitivity or non-alphanumeric characters.
*/

std::string firstNonRepeatedCharacter(std::string str) {
	 std::string s = "Invalid";
	 for(int i = 0; i < str.length(); i++){
		  int flag=1; 
		  for(int j=0; j < str.length(); j++){
				 if(i!=j){
					  if(str[i]==str[j]){//if the string character repeated we break the iteration going for next iteration.
							 flag=0;
							 break;
						}
				 }
			}
     //if the characters is non repeated store it into the s string and break the loops iteration. 
		 if(flag==1){
			  s=str[i];
			  break;
		 }
	 }
	return s;
}
