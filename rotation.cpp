/*
Create a left rotation and a right rotation function that returns all the left rotations and right rotations of a string.

Examples
leftRotations("abc") ➞ ["abc", "bca", "cab"]

rightRotations("abc") ➞ ["abc", "cab", "bca"]

leftRotations("abcdef") 
➞ ["abcdef", "bcdefa", "cdefab", "defabc", "efabcd", "fabcde"]

rightRotations("abcdef") 
➞ ["abcdef", "fabcde", "efabcd", "defabc", "cdefab", "bcdefa"]
Notes
N/A
*/

std::vector<std::string> leftRotations(std::string str) {
	  std::vector<std::string> leftRotation;
	  for(int i=0;i<str.length();i++){
			  leftRotation.push_back(str);//push the string into the vector 
			  str.insert(str.end(), str[0]);//left rotate the character
			  str.erase(0,1);//erase the 0th index character
		}
	return leftRotation;// return the leftRotation vector of string 
}

std::vector<std::string> rightRotations(std::string str) {
	 std::vector<std::string> rightRotation;
	  for(int i=0;i<str.length();i++){
			  rightRotation.push_back(str);//push the string into the vector
			  str.insert(str.begin(), str[str.length()-1]);//right rotate the character
			  str.erase(str.length()-1,str.length());//erase the final index character
		}
	return rightRotation;//return the rightRotation vector of string
}
