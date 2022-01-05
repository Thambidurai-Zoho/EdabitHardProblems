/*
Write a function that returns the longest common ending between two strings.

Examples
longestCommonEnding("multiplication", "ration") ➞ "ation"

longestCommonEnding("potent", "tent") ➞ "tent"

longestCommonEnding("skyscraper", "carnivore") ➞ ""
Notes
Return an empty string if there exists no common ending.
*/

using namespace std;

string longestCommonEnding(string s1, string s2) {
	  string longestCommonEnding="";
	  for(int i=s2.length()-1,j=s1.length()-1; i >=0 ; i--,j--){
			 if(s1[j] == s2[i]){
				  longestCommonEnding+=s1[j];//store the common ending letters into the longestCommonEnding string
			 }
			else break;
		}
	reverse(longestCommonEnding.begin(),longestCommonEnding.end());//reverse the string 
	 return longestCommonEnding;
}
