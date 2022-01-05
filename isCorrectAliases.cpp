/*
You are in the process of creating a chat application and want to add an anonymous name feature. This anonymous name feature will create an alias that consists of two capitalized words beginning with the same letter as the users first name.

Create a function that determines if the array of users is mapped to an array of anonymous names correctly.

Examples
isCorrectAliases(["Adrian M.", "Harriet S.", "Mandy T."], ["Amazing Artichoke", "Hopeful Hedgehog", "Marvelous Mouse"]) ➞ true

isCorrectAliases(["Rachel F.", "Pam G.", "Fred Z.", "Nancy K."], ["Reassuring Rat", "Peaceful Panda", "Fantastic Frog", "Notable Nickel"]) ➞ true

isCorrectAliases(["Beth T."], ["Brandishing Mimosa"]) ➞ false
// Both words in "Brandishing Mimosa" should begin with a "B" - "Brandishing Beaver" would do the trick.
Notes
Both words in the alias should be capitalized.
*/

using namespace std; 

bool isCorrectAliases(vector<string> names, vector<string> aliases) {
	  for(int i=0;i< names.size() ; i++){
			   int flag=1;
         //we check the first word of the first letter is same like as a names first letter
			   if(names[i][0]==aliases[i][0]){
					   for(int j=1;j < aliases[i].size();  j++){
							   if(aliases[i][j]==' '){
									   j++;
                   //we check the second word of the first letter is same like as a names first letter
									   if(aliases[i][0]==aliases[i][j]){
											   flag=0;
										 }
								 }
						 }
				 }
			 if(flag==1){
				  return false;
			 }
		}
	return true;
}
