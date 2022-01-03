/*
Create a function that tweaks letters by one forward (+1) or backwards (-1) according to an array.

Examples
tweakLetters("apple", {0, 1, -1, 0, -1}) ➞ "aqold"
// "p" + 1 => "q"; "p" - 1 => "o"; "e" - 1 => "d"

tweakLetters("many", {0, 0, 0, -1}) ➞ "manx"

tweakLetters("rhino", {1, 1, 1, 1, 1}) ➞ "sijop"
Notes
Don't worry about capital letters.


*/




std::string tweakLetters(std::string s, std::vector<int> arr) {
	   std::string tweakLetters;
	   for(int i=0;i<s.length();i++){
			 if(s[i]=='z'&&arr[i]==1){
				 tweakLetters+='a';
			 }
			 else if(s[i]=='a' && arr[i]==-1){
				 tweakLetters+='z';
			 }
			 else tweakLetters+=(s[i]+arr[i]);
		 }
	return tweakLetters;
}
