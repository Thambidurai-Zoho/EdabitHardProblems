/*
Create a function that returns the number of characters shared between two words.

Examples
sharedLetters("apple", "meaty") ➞ 2
// Since "ea" is shared between "apple" and "meaty".

sharedLetters("fan", "forsook") ➞ 1

sharedLetters("spout", "shout") ➞ 4
Notes
N/A


*/


int sharedLetters(std::string str1, std::string str2) {
	  int sharedLettersCount = 0;
	   for(int i = 0 ; i < str1.length() ; i++){
			     for(int j = 0; j < str2.length(); j++){
						    if(str1[i]==str2[j]){// if str1 letter and str2 letter are same we increase the sharedLettersCount .
									  sharedLettersCount++;
									  str2[j]='>';//sometimes the same letter repeated multi times its also count in the sharedLettersCount.its a wrong way of counting the sharedLettersCount so we avoid this count we change the second string character to '<'. 
									  break;
								}
					 }
		 }
	  return sharedLettersCount; 
	
}
