/*
Create a function that takes a string and replaces each letter with its appropriate position in the alphabet. "a" is 1, "b" is 2, "c" is 3, etc, etc.

Examples
alphabetIndex("Wow, does that work?")
➞ "23 15 23 4 15 5 19 20 8 1 20 23 15 18 11"

alphabetIndex("The river stole the gods.")
➞ "20 8 5 18 9 22 5 18 19 20 15 12 5 20 8 5 7 15 4 19"

alphabetIndex("We have a lot of rain in June.")
➞ "23 5 8 1 22 5 1 12 15 20 15 6 18 1 9 14 9 14 10 21 14 5"
Notes
If any character in the string isn't a letter, ignore it.
*/


string alphabetIndex(string str) {
	   string alphabet;
     for(int i = 0; i < str.length(); i++){
			  if(str[i] >= 97 && str[i] <= 122){
					  alphabet+=to_string(str[i]-96);//we subtract character ascii value and 96(ascii) value for small letters to find the number of the character
					  alphabet+=" ";
				}
			 else if(str[i] >= 65 && str[i] <= 90){
				   alphabet+=to_string(str[i]-64);//we subtract character ascii value and 64(ascii) value for capital letters to find the number of the character
					  alphabet+=" ";
			 }
			 else{}
		 }
	 alphabet.pop_back();//we remove the last character using pop function 
	 return alphabet;
}
