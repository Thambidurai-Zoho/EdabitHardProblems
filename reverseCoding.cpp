/*
This is a reverse coding challenge. Normally you're given explicit directions with how to create a function. Here, you must generate your own function to satisfy the relationship between the inputs and outputs.

Your task is to create a function that, when fed the inputs below, produce the sample outputs shown.

Examples
"A4B5C2" ➞ "AAAABBBBBCC"

"C2F1E5" ➞ "CCFEEEEE"

"T4S2V2" ➞ "TTTTSSVV"

"A1B2C3D4" ➞ "ABBCCCDDDD"
Notes
If you get stuck, check the Comments for help.
*/


std::string mysteryFunc(std::string s) {
	   std::string mystery;
	   for(int i = 0; i < s.length(); i++){
			   if(s[i] >= '0' && s[i] <= '9'){//if the charcaters between '0' to '9' we enter into the condition.
					   for(int j = 0; j < (s[i]-'0'); j++){//(s[i]-'0') used to convert character to integer 
							  mystery = mystery + s[i-1];//store the characters into the mystery string 
						 }
				 } 
		 }
	   return mystery;
}
